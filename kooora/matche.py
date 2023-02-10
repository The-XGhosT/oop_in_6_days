import requests
from bs4 import BeautifulSoup
import sys

original_stdout = sys.stdout
# url = "https://onefootball.com/en/matches"
# response = requests.get(url)
# soup = BeautifulSoup(response.content, "html.parser")
# with open("output.txt", "w", encoding="utf-8") as file:
#     sys.stdout = file
#     print(soup.get_text())
with open("output.txt", "r", encoding="utf-8") as file:
    content = file.read()
sys.stdout = original_stdout
def return_matches(x) :
	i = 0
	j = 0
	y = ["hello"]
	key_s = list(Dic_equipe.keys())
	valu_e = list(Dic_equipe.values())
	new_dec = {}
	while i < len(key_s) :
		str = ""
		str += key_s[i]
		L= len(str)
		start = x.find(str)
		if start != -1 :
			new_dec.update({start:valu_e[i]})
		i += 1
	snew_dec = sorted(new_dec)
	matches=[]
	h = 0
	while h  < len(snew_dec) :
		matches.append(new_dec.get(snew_dec[h]))
		h += 1
	return matches

Dic_Qatar ={
"Al Duhail SC":"الدحيل",
"Al Arabi SC":"العربي",
"Al Sadd SC":"السد",
"Qatar SC":"قطر",
"Al Gharafa SC":"الغرافة",
"Al Wakrah SC":"الوكرة",
"Al Ahli SC":"الاهلي",
"Al Markhiya SC":"المرخية",
"Al Shamal SC":"الشمال",
"Al Rayyan SC":"الريان",
"Al Sailiya SC":"السيلية",
"Umm Salal SC":"ام صلال",
"Qatar Cup":"🏆🇶🇦كأس قطر-"}

Dic_Portugal = { "SL Benfica": "بنفيكا",
"FC Porto": "بورتو",
"Sporting Braga" : "سبورتينغ براغا",
"Sporting CP" : "سبورتينغ لشبونة",
"Vitoria Guimaraes" : "فيتوريا غيماريش",
"Casa Pia A.C" : "كاسا بيا",
"FC Arouca" : "اروكا",
"GD Chaves" : "تشافيس",
"Boavista FC" : "بوافيستا",
"FC Vizela" : "فيزيلا",
"Portimonense S.C" : "بورتيمونينسي",
"Rio Ave FC" : "ريو افي ",
"Famalicao fc" : "فاماليكاو",
"GD Estoril Praia" : "استوريل برايا",
"Gil Vicente" : "جيل فيسنتي",
"Santa Clara" : "سانتا كلارا",
"CS Maritimo" : "ماريتيمو",
"Pacos De Ferreira" : "باكوس دي فييرا",
"Portugal Primeira Liga" :"🇵🇹الدوري البرتغالي-"
}

Dic_Moroccan ={"Fath Casablanca" :"شباب الفتح البيضاوي",
"AS Sale":" جمعية سلا",
"USM Union sportive Musilman Oujda":" الإتحاد الإسلامي الوجدي",
"Fath Union Sport de Rabat ":"الفتح الرياضي ",
"Chabab Houara ":"شباب هوارة",
"Racing Casablanca ":"الراسينغ البيضاوي",
"Chabab Ben Guerir":" شباب بنجرير",
"Rapide Oued Zem ":"سريع وادي زم",
"Chabab Mohammedia":" شباب المحمدية",
"Mouloudia Oujda":" مولودية وجدة",
"Olympique Club De Khouribga":" أولمبيك خريبكة",
"Union Sportif Amal Tiznit":"إتحاد أمل تزنيت",
"Renaissance Zemamra" :"نهضة الزمامرة",
"Chabab Kasba Tadla" :  "شباب قصبة تادلة",
"Tihad Casablanca" : "الاتحاد البيضاوي",
"Difaa Hassani El Jadidi":"الدفاع الحسني الجديدي",
"UTS Union Touarga Sport Rabat":"اتحاد تواركة",
"FAR Rabat":"الجيش الملكي",
"Youssoufia Berrechid":"يوسوفية برشيد",
"Raja Club Athletic":"الرجاء الرياضي ",
"Stade Marocain":"الاستاد المغربي",
"Maghreb de Fes":"المغرب الفاسي",
"Ittihad Tanger":"اتحاد طنجة",
"Olympique Club de Safi":"اولمبيك اسفي",
"AJSB":"شباب الجنوب بوجدور",
"Moghreb Tetouan":"المغرب التطواني",
"Wydad Athletic Club":"الوداد الرياضي",
"Renaissance de Berkane":"نهضة بركان",
"Itihad Zemmouri de Khemisset":"الاتحاد الزموري الخميسات",
"JSS Jeunesse Sportive Soualem":"شباب السوالم",
"Hassania Union Sport Agadir":"حسنية أكادير",
"Fath Nador":"فتح الناظور",
"Moroccan Throne Cup":"🏆🇲🇦كأس العرش المغربي-",
"Moroccan Professional Inwi Botola 1":"🇲🇦الدوري المغربي-"
 }


ff = content
Dic_equipe = {}
Dic_equipe.update(Dic_Qatar)
Dic_equipe.update(Dic_Portugal)
Dic_equipe.update(Dic_Moroccan)
y = return_matches(ff)

file = "file.txt"
import os

os.remove(file)
f = open(file, "x")
f = open(file, "a")
i = 0
count = 0
title = "*الاسم هنا*"
f.write(title)
print(title)
print("\n")
f.write("\n" * 2)
while i < len(y):
	if y[i].find("-") != -1 :
		print(y[i], end ="\n")
		f.write(y[i])
		print("\n")
		f.write("\n")
	else :
		 
		print(y[i] + "/", end="\n")
		f.write("\n")
		f.write("/" + y[i])
		f.write("\n")
		count+=1
		if count == 2 :
			print("\n")
			f.write("\n")
			count = 0
	i = i+1

f.close()

with open("file.txt", "r") as file:
    text = file.read()
lines = text.splitlines()
max_length = max(len(line) for line in lines)
aligned_text = "\n".join(line.rjust(max_length) for line in lines)
print(aligned_text)
with open("right_aligned.txt", "w") as file:
    file.write(aligned_text)



