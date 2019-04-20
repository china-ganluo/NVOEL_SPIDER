import urllib.request
import ssl
import re
import os
import importlib
import sys
importlib.reload(sys)  
print("开始初始化...\n\n")
print("获取小说规则列表中....\n\n")
def rules_name_acquire (part_intput):
    rules_name = os.listdir(part_intput)
    return rules_name
rules_name_not_filtrate = rules_name_acquire(os.getcwd())
shurujian = []
llcd = 0 
for oodd in rules_name_not_filtrate:
    hozhuo = oodd[-6:]
    pppp = hozhuo
    if  pppp == ".ganro":
        shurujian.append(oodd)
        llcd = len(shurujian)
        print("若要引用输入:"+str(llcd-1)+"  "+oodd+"\n")
print("\n")
if llcd == 0:
    print("无规则文件，请用GANRORULESMAKER创建规则\n\n\n")
ssl._create_default_https_context = ssl._create_unverified_context
from bs4 import BeautifulSoup
print("输入规则文件名称或者序号: \n")
xmltxtname = input()
lololo = str(xmltxtname)
for odl in range(llcd):
    if lololo == str(odl) :
       lololo = shurujian[odl]
print("数据解析中")
def xmlreadr(xmlname): #读取配置文件中的数据
    txtn = open(xmlname,"r",encoding="utf-8")
    neirong = txtn.read()
    txtn.close()
    return neirong
xmlnr = xmlreadr(lololo)
def bbma(ii):
    km = re.findall("<bianma>(.+?)</bianma>",ii)
    w = str(km)
    x =w.replace("['","")
    mmm = x.replace("']","")
    return mmm
bianma = bbma(xmlnr)
def getforurl (neirongshuru):
 #   soup = BeautifulSoup(neirongshuru,"lxml")
 #   url = soup.find("mainurl").text
    km = re.findall("<mainurl>(.+?)</mainurl>",neirongshuru)
    w = str(km)
    x =w.replace("['","")
    url = x.replace("']","")
    return url
def getnovelname(nr):
    km = re.findall("<novelname>(.+?)</novelname>",nr)
    w = str(km)
    x =w.replace("['","")
    novel_namer = x.replace("']","")
    return novel_namer
def suoyingurl (l):
#    suyin = BeautifulSoup(l,"lxml")
 #   l = str(suyin.find("suoyin"))
 #   e = l.replace("<suoyin>","")
 #   suoyinurl = e.replace("</suoyin>","")
    km = re.findall("<suoyin>(.+?)</suoyin>",l)
    w = str(km)
    x =w.replace("['","")
    suoyinurl = x.replace("']","")
    return suoyinurl
def zhangjieurlm (o):
#    kk = BeautifulSoup(o,"lxml")
#   oo = str(kk.find("zhangjieurl"))
 #   op = oo.replace("<zhangjieurl>","")
 #   lp = op.replace("</zhangjieurl>","")
    km = re.findall("<zhangjieurl>(.+?)</zhangjieurl>",o)
    w = str(km)
    x =w.replace("['","")
    lp = x.replace("']","")
    return lp
def zhangjiename(zz):
#    q = str(BeautifulSoup(zz,"lxml").find("hangjiename"))
 #   y = q.replace("<hangjiename>","")
#    kp = y.replace("</hangjiename>","")
    km = re.findall("<hangjiename>(.+?)</hangjiename>",zz)
    w = str(km)
    x =w.replace("['","")
    kp = x.replace("']","")
    return kp
def novelneixin(u):
 #   i = str(BeautifulSoup(u,"lxml").find("leixin"))
 #   jo = i.replace("<leixin>","")
  #  ho = jo.replace("</leixin>","")
    km = re.findall("<leixin>(.+?)</leixin>",u)
    w = str(km)
    x =w.replace("['","")
    ho = x.replace("']","")
    return ho 
def zuozhename(y):
#    w = str(BeautifulSoup(y,"lxml").find("zuozhe"))
#    wo =w.replace("<zuozhe>","")
 #   lp = wo.replace("</zuozhe>","")
    km = re.findall("<zuozhe>(.+?)</zuozhe>",y)
    w = str(km)
    x =w.replace("['","")
    lp = x.replace("']","")
    return lp
def zhenwenm (t):
#    c = str(BeautifulSoup(t,"lxml").find("zhenwen"))
#    vo = c.replace("<zhenwen>","")
#    kp = vo.replace("</zhenwen>","")
    km = re.findall("<zhenwen>(.+?)</zhenwen>",t)
    w = str(km)
    x =w.replace("['","")
    kp = x.replace("']","")
    return kp
def img_url(v):
 #   j = str(BeautifulSoup(v,"lxml").find("gg"))
 #   jp = j.replace("<gg>","")
 #   jk = jp.replace("</gg>","")
    km = re.findall("<gg>(.+?)</gg>",v)
    w = str(km)
    x =w.replace("['","")
    jk = x.replace("']","")
    return jk
def z_url(lop):
 #   lpa = str(BeautifulSoup(lop,"lxml").find("zz"))
 #   lkk = lpa.replace("<zz>","")
 #   lko = lkk.replace("</zz>","")
    km = re.findall("<zz>(.+?)</zz>",lop)
    w = str(km)
    x =w.replace("['","")
    lko = x.replace("']","")
    return lko
def jianjie(llpd):
    km = re.findall("<jianjie>(.+?)</jianjie>",llpd)
    w = str(km)
    x =w.replace("['","")
    ho = x.replace("']","")
    return ho
#配置文件正则
index_url = getforurl(xmlnr) #小说网站主链接
anovelname = getnovelname(xmlnr)#小说网站小说名
asuoyinurl  = suoyingurl(xmlnr)#小说网站索引链接
azhangjieurl = zhangjieurlm(xmlnr)#小说网站章节链接
azhangjie_name = zhangjiename(xmlnr)#小说网站章节名
anovel_leixin = novelneixin(xmlnr)#小说类型
awriter_name = zuozhename(xmlnr)#小说作者名
azhenwen_rules = zhenwenm(xmlnr)#小说正文
aimg_url_m = img_url(xmlnr)#小说图片
zzurl = z_url(xmlnr)#网站主页链接
novel_jianjie_not = jianjie(xmlnr)
print("读取成功！配置如下：\n")

print(index_url+"\n")
print(anovelname+"\n")
print(novel_jianjie_not+"\n")
print(asuoyinurl+"\n")
print(azhangjieurl+"\n")
print(azhangjie_name+"\n")
print(anovel_leixin+"\n")
print(awriter_name+"\n")
print(azhenwen_rules+"\n")
print(aimg_url_m+"\n")
print(zzurl+"\n")
def shoindex(hh,mm):
    res= urllib.request.urlopen(hh)
    indexs = res.read().decode(mm,'ignore')
    return indexs
print("链接网站中.....")
index = shoindex(index_url,bianma)
NEXT_URL = re.findall(asuoyinurl,index)
print(NEXT_URL)
a= 0
print("合成链接中...")
while a < len(NEXT_URL):
    print(NEXT_URL[a])
    nexturl = zzurl + NEXT_URL[a]
    print(nexturl+"\n")
    ssl._create_default_https_context = ssl._create_unverified_context
    shubenindex = urllib.request.urlopen(nexturl)
    shubenindexs= shubenindex.read().decode(bianma,'ignore')
  #  shuben_index = shuben_indexs.text
#    appo = open("1.txt",'w',encoding = 'utf-8')
#    appo.write(shubenindexs)
#    appo.close()
    xsname = re.findall(anovelname,shubenindexs)#小说名
    writername = re.findall(awriter_name,shubenindexs)#小说作者
    xsleixin = re.findall(anovel_leixin,shubenindexs)#小说类型
    xsimgurl = re.findall(aimg_url_m,shubenindexs)#小说图片链接
    xszjname = re.findall(azhangjie_name,shubenindexs)#小说章节名
    xszjurl = re.findall(azhangjieurl,shubenindexs)#小说章节链接
    xjianjie = re.findall(novel_jianjie_not,shubenindexs)#小说简介
    print("编号:"+str(a)+"\n"+"开始分析:"+"\n")
    print("小说名:"+str(xsname).replace("['","").replace("']","")+"\n")
    print("小说作者:"+str(writername).replace("['","").replace("']","")+"\n")
    print("小说类型:"+str(xsleixin).replace("['","").replace("']","")+"\n")
    print("小说图片链接:"+str(xsimgurl).replace("['","").replace("']","")+"\n")
    print("小说简介:"+str(xjianjie).replace("['","").replace("']","")+"\n")
    f = 0
    while f < len(xszjurl):
        novel_zhangjie_name = xszjname[f]
        novel_zhangjie_url = zzurl + xszjurl[f]
        neirong = urllib.request.urlopen(novel_zhangjie_url)
        nrr = neirong.read().decode(bianma,'ignore')
#        nr_index =  nr_indexa.text
        novel_nr = re.findall(azhenwen_rules,nrr) #小说正文
        nnrr = str(novel_nr).replace(";&nbsp","")
        hhh =nnrr.replace("['","")
        plpl = hhh.replace("']","")
        lklk = plpl.replace("&nbsp;","")
        mkmk = lklk.replace("<br />","\n").replace("\\u3000","").replace("\\r","\n").replace("请记住本书首发域名：biqiuge.com。笔趣阁手机版阅读网址：m.biqiuge.com","").replace("novel_zhangjie_url","").replace("<script>chaptererror();</script>","")
        print("章节名:"+ str(novel_zhangjie_name)+"\n")
        print("章节链接:"+str(novel_zhangjie_url)+"\n")
        print("章节内容:"+mkmk+"\n")
        f= f+1
    print("编号:"+str(a)+"【"+str(xsname)+"】"+"采集完毕！！"+"\n")
    print("开始采集下一本\n")
    a= a+1
