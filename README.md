# OSM - Modelling
Jorn Brouwer & Wouter Meijer
# Casus: Red-cars
---

## README


**START HIER MET LEZEN**

---

Aan de docent:



Zoals besproken hebben wij de documentatie, in markdown, beschreven.

Wij gebruiken de [tool 'mkdocs'](http://www.mkdocs.org/#installation) om:
  - markdown files te converteren naar html.
  - een statische webserver te bouwen d.m.v. python.

De reden dat wij dit besloten hebben is dat mijn partner en ik op verschillende Operating Systems werken. Hierdoor konden we niet met een geschikte grafische tekstverwerker (bv. OSx-Pages) samenwerken.



Na het uitzoeken van e.e.a. over markdown kwamen we de tool mkdocs tegen. Je kunt hiermee via de command line, binnen 2 commando's een real-time webservertje draaien. In je tekstverwerker maak je bv. wijzigingen in je Markdown files (.md) >> save-file. Hierna ververst de browser automatisch en krijg je de wijzigingen te zien.

NOTE:Om mkdocs te kunnen installeren heb  je python nodig.


### Clone this repo

```
git clone https://github.com/jornbrouwer/RentIT.git

```

### Install

![1. ](assets/markdown-img-paste-20171102212619818.png)

now mkdocs is installed. We created a new mkdocs-filebase.

### Go to root of the 'clone'

```
cd ../path_to_RentIT

```

The root of the folder contains ```mkdocs.yml``` file. This is the configuration file for the webserver.

### Build the website

```
mkdocs serve
```

![](assets/markdown-img-paste-20171102231815929.png)

open: [localhost:8000](127.0.0.1:8000)
open: [127.0.0.1:8000](127.0.0.1:8000)
