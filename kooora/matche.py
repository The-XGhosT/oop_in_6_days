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

# Dic_champion_afrique ={ "Wydad Athletic Club":"الوداد المغربي",
# " Kabylie":" شبيبة القبائل الجزائري",
# "Petro Atletico de Luanda":" بيترو دي لواندا الأنجولي ",
# "AS Vita Club":" فيتا كلوب",
# "Mamelodi Sundowns":"صن داونز الجنوب أفريقي ",
# "Al Hilal Omdurman":"الهلال السوداني",
# "Coton Sport":" القطن الكاميروني",
# "Al Ahly":"الأهلي المصري",
# "Vipers SC":"فايبرز الأوغندي",
# "Raja Club Athletic":"الرجاء المغربي",
# "Horoya Athletic Club":"حوريا الغيني.",
# "Simba S.C":" سيمبا التنزاني",
# "Esperance ST":"الترجي التونسي ",
# "Al Merrikh Omdurman":" المريخ السوداني ",
# "El Zamalek":"الزمالك المصري",
# "Chabab Riadhi De Belouizdad
# ":"شباب بلوزداد الجزائري"}

Dic_PremierLeague ={'Arsenal': 'آرسنال', 'Aston Villa': 'أستون فيلا', 'Chelsea': 'تشيلسي', 'FC Everton': 'إيفرتون', 'FC Fulham': 'فولهام', 'Leeds United': 'ليدز يونايتد', 'Liverpool': 'ليفربول', 'Manchester City': 'مانشستر سيتي', 'Manchester United': 'مانشستر يونايتد', 'Newcastle United': 'نيوكاسل يونايتد', 'Southampton': 'ساوثهامتون', 'Tottenham Hotspur': 'توتنهام هوتسبير', 'West Ham United': 'وست هام يونايتد', 'Leicester City': 'ليستر سيتي', 'Crystal Palace': 'كريستال بالاس', 'Nottingham Forest FC': 'نوتينغهام فورست', 'Wolverhampton Wanderers': 'وولفرهامبتون', 'AFC Bournemouth': 'بورنموث', 'Brighton & Hove Albion': 'برايتون', 'Brentford': 'برينتفورد'}

Dic_spanish_league={'Athletic de Bilbao': 'أتلتيك بيلباو', 'Atletico de Madrid': 'أتلتيكو مدريد', 'FC Barcelona': 'برشلونة', 'Real Betis': 'ريال بيتيس', 'Celta de Vigo': 'سيلتا فيغو', 'RCD Espanyol': 'إسبانيول', 'Real Mallorca': 'ريال مايوركا', 'Osasuna': 'أوساسونا', 'Real Madrid CF': 'ريال مدريد', 'Real Sociedad': 'ريال سوسييداد', 'Rayo Vallecano': 'رايو فاليكانو', 'Sevilla FC': 'إشبيلية', 'Valencia C.F': 'فالنسيا', 'Real Valladolid': 'بلد الوليد', 'Villarreal CF': 'فياريال', 'UD Almeria': 'ألميريا', 'Getafe CF': 'خيتافي', 'Elche CF': 'إلتشي', 'Cadiz CF': 'قاديش', 'Girona': 'جيرونا'}


Dic_italie ={'AC Milan': 'ميلان', 'Atalanta': 'أتلانتا', 'Bologna': 'بولونيا', 'Empoli': 'إمبولي', 'Internazionale Milano': 'انتر ميلان', 'Juventus FC': 'يوفنتوس', 'SS Lazio': 'لاتسيو', 'AS Roma': 'روما', 'Torino FC': 'تورينو', 'Udinese Calcio': 'أودينيزي', 'US Lecce': 'ليتشي', 'UC Sampdoria': 'سامبدوريا', 'SSC Napoli': 'نابولي', 'Hellas Verona FC': 'هيلاس فيرونا', 'Salernitana': 'ساليرنيتانا', 'ACF Fiorentina': 'فيورنتينا', 'US Cremonese': 'كريمونيزي', 'AC Monza': 'مونزا', 'Spezia Calcio': 'سبيزيا', 'US Sassuolo Calcio': 'ساسولو'}


Dic_Bundesliga={'Bayer 04 Leverkusen': 'باير ليفركوزن', 'FC Bayern Munich': 'بايرن ميونيخ', 'Borussia Dortmund': 'بوروسيا دورتموند', 'Borussia Monchengladbach': 'بوروسيا مونشنغلادباخ', 'Hertha BSC': 'هيرتا برلين', 'FC Schalke 04': 'شالكه 04', 'VfB Stuttgart': 'شتوتجارت', 'VFL Bochum': 'بوخوم', 'SV Werder Bremen\t': 'فيردر بريمن', 'VfL Wolfsburg': 'فولفسبورج', 'SC Freiburg': 'فرايبورج', 'Eintracht Frankfurt': 'آينتراخت فرانكفورت', '1. FC Koln': 'كولن', 'FSV Mainz 05': 'ماينز 05', 'TSG 1899 Hoffenheim': 'هوفنهايم', '1. FC Union Berlin': 'يونيون برلين', 'FC Augsburg': 'أوجسبورج', 'RB Leipzig': 'لايبزيج'}

Dic_France={'AC Ajaccio': 'اجاكسيو', 'AJ Auxerre': 'أوكسير', 'RC Lens': 'لانس', 'LOSC Lille': 'ليل', 'Olympique Lyonnais': 'ليون', 'Olympique de Marseille': 'مارسيليا', 'AS Monaco': 'موناكو', 'HSC Montpellier': 'مونبلييه', 'FC Nantes': 'نانت', 'OGC Nice': 'نيس', 'Paris Saint-Germain': 'باريس سان جيرمان', 'Stade Rennais FC': 'رين', 'RC Strasbourg': 'ستراسبورج', 'ES Troyes AC': 'تروا', 'Toulouse FC': 'تولوز', 'Clermont Foot 63': 'كليرمون فوت 63', 'Stade brestois 29': 'ستاد بريست 29', 'Stade de Reims': 'ستاد ريمس', 'FC Lorient': 'لوريان', 'Angers SCO': 'أنجيه'}
ff = content
Dic_equipe = {}
Dic_equipe.update(Dic_Qatar)
Dic_equipe.update(Dic_Portugal)
Dic_equipe.update(Dic_Moroccan)
Dic_equipe.update(Dic_PremierLeague)
Dic_equipe.update(Dic_spanish_league)
Dic_equipe.update(Dic_italie)
Dic_equipe.update(Dic_Bundesliga)
Dic_equipe.update(Dic_France)
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



