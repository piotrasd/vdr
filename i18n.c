/*
 * i18n.c: Internationalization
 *
 * See the main source file 'vdr.c' for copyright information and
 * how to reach the author.
 *
 * $Id: i18n.c 1.50 2002/01/27 15:52:32 kls Exp $
 *
 * Slovenian translations provided by Miha Setina <mihasetina@softhome.net>
 * Italian   translations provided by Alberto Carraro <bertocar@tin.it>
 * Dutch     translations provided by Arnold Niessen <niessen@iae.nl> <arnold.niessen@philips.com>
 * Portugese translations provided by Paulo Manuel Martins Lopes <pmml@netvita.pt>
 * French    translations provided by Jean-Claude Repetto <jc@repetto.org>
 * Norwegian translations provided by J�rgen Tvedt <pjtvedt@online.no>
 *
 */

/*
 * How to add a new language:
 *
 * 1. Announce your translation action on the Linux-DVB mailing
 *    list to avoid duplicate work.
 * 2. Increase the value of 'NumLanguages'.
 * 3. Insert a new line in every member of the 'Phrases[]' array,
 *    containing the translated text for the new language.
 *    For example, assuming you want to add the Italian language,
 *
 *       { "English",
 *         "Deutsch",
 *       },
 *
 *    would become
 *
 *       { "English",
 *         "Deutsch",
 *         "Italiano",
 *       },
 *
 *    and so on. Append your language after the last existing language
 *    and write the name of your language in your language (not in English,
 *    which means that it should be 'Italiano', not 'Italian').
 *    Note that only the characters defined in 'fontosd.c' will
 *    be available!
 * 4. Compile VDR and test the new language by switching to it
 *    in the "Setup" menu.
 * 5. Send the modified 'i18n.c' file to <kls@cadsoft.de> to have
 *    it included in the next version of VDR.
 */

#include "i18n.h"
#include <stdio.h>
#include "config.h"
#include "tools.h"

const int NumLanguages = 8;

typedef const char *tPhrase[NumLanguages];

const tPhrase Phrases[] = {
  // The name of the language (this MUST be the first phrase!):
  { "English",
    "Deutsch",
    "Slovenski",
    "Italiano",
    "Nederlands",
    "Portugues",
    "Fran�ais",
    "Norsk",
  },
  // Menu titles:
  { "Main",
    "Hauptmen�",
    "Glavni meni",
    "Principale",
    "Hoofdmenu",
    "Principal",
    "Menu",
    "Hovedmeny",
  },
  { "Schedule",
    "Programm",
    "Urnik",
    "Programmi",
    "Gids",
    "Programa",
    "Programmes",
    "Programmer",
  },
  { "Channels",
    "Kan�le",
    "Kanali",
    "Canali",
    "Kanalen",
    "Canal",
    "Cha�nes",
    "Kanaler",
  },
  { "Timers",
    "Timer",
    "Termini",
    "Timer",
    "Timers",
    "Alarmes",
    "Programmation",
    "Timer",
  },
  { "Recordings",
    "Aufzeichnungen",
    "Posnetki",
    "Registrazioni",
    "Opnames",
    "Gravacoes",
    "Enregistrements",
    "Opptak",
  },
  { "DVD",
    "DVD",
    "DVD",
    "DVD",
    "DVD",
    "DVD",
    "DVD",
    "DVD",
  },
  { "Setup",
    "Einstellungen",
    "Nastavitve",
    "Opzioni",
    "Instellingen",
    "Configurar",
    "Configuration",
    "Konfigurasjon",
  },
  { "Commands",
    "Befehle",
    "Ukazi",
    "Comandi",
    "Commando's",
    "Comandos",
    "Commandes",
    "Kommandoer",
  },
  { "Edit Channel",
    "Kanal Editieren",
    "Uredi kanal",
    "Modifica canale",
    "Kanaal aanpassen",
    "Modificar Canal",
    "Modifier une cha�ne",
    "Editer Kanal",
  },
  { "Edit Timer",
    "Timer Editieren",
    "Uredi termin",
    "Modifica Timer",
    "Timer veranderen",
    "Modificar Alarme",
    "Changer la programmation",
    "Editer Timer",
  },
  { "Event",
    "Sendung",
    "Oddaja",
    "Eventi",
    "Uitzending",
    "Evento",
    "Ev�nement",
    "Hendelse"
  },
  { "Summary",
    "Inhalt",
    "Vsebina",
    "Sommario",
    "Inhoud",
    "Resumo",
    "R�sum�",
    "Sammendrag",
  },
  { "Schedule - %s",
    "Programm - %s",
    "Urnik - %s",
    "Programma - %s",
    "Programma - %s",
    "Programa - %s",
    "Programmes - %s",
    "Program Guide - %s",
  },
  { "What's on now?",
    "Was l�uft jetzt?",
    "Kaj je na sporedu?",
    "In programmazione",
    "Wat is er nu?",
    "O que ver agora?",
    "Programmes en cours",
    "Hvilket program sendes n�?",
  },
  { "What's on next?",
    "Was l�uft als n�chstes?",
    "Kaj sledi?",
    "Prossimi programmi",
    "Wat komt er hierna?",
    "O que ver depois?",
    "Prochains programmes",
    "Hvilket program er neste?",
  },
  // Button texts (should not be more than 10 characters!):
  { "Edit",
    "Editieren",
    "Uredi",
    "Modifica",
    "Verander",
    "Modificar",
    "Modifier",
    "Editer",
  },
  { "New",
    "Neu",
    "Novo",
    "Nuovo",
    "Nieuw",
    "Novo",
    "Nouveau",
    "Ny",
  },
  { "Delete",
    "L�schen",
    "Odstrani",
    "Cancella",
    "Verwijder",
    "Apagar",
    "Supprimer",
    "Slett",
  },
  { "Mark",
    "Markieren",
    "Oznaci",
    "Marca",
    "Verplaats",
    "Marcar",
    "Marquer",
    "Marker",
  },
  { "Record",
    "Aufnehmen",
    "Posnemi",
    "Registra",
    "Opnemen",
    "Gravar",
    "Enregistre",
    "Ta opp",
  },
  { "Play",
    "Wiedergabe",
    "Predavajaj",
    "Riproduci",
    "Afspelen",
    "Play",
    "Lire",
    "Spill av",
  },
  { "Rewind",
    "Anfang",
    "Zacetek",
    "Da inizio",
    "Spoel terug",
    "Rebobinar",
    "Retour",
    "Spol tilbake",
  },
  { "Resume",
    "Weiter",
    "Nadaljuj",
    "Riprendi",
    "Verder",
    "Continuar",
    "Reprendre",
    "Fortsett",
  },
  { "Summary",
    "Inhalt",
    "Vsebina",
    "Sommario",
    "Inhoud",
    "Resumo",
    "R�sum�",
    "Sammendrag",
  },
  { "Open",
    "�ffnen",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
  },
  { "Switch",
    "Umschalten",
    "Preklopi",
    "Cambia",
    "Selecteer",
    "Seleccionar",
    "Regarder",
    "Skift til",
  },
  { "Now",
    "Jetzt",
    "Sedaj",
    "Adesso",
    "Nu",
    "Agora",
    "Maintenant",
    "N�",
  },
  { "Next",
    "N�chste",
    "Naslednji",
    "Prossimo",
    "Hierna",
    "Proximo",
    "Apr�s",
    "Neste",
  },
  { "Schedule",
    "Programm",
    "Urnik",
    "Programma",
    "Programma",
    "Programa",
    "Programme",
    "Programmer",
  },
  { "Language",
    "Sprache",
    "Jezik",
    "Linguaggio",
    "Taal",
    "", // TODO
    "Langue",
    "Spr�k",
  },
  { "Eject",
    "Auswerfen",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "Ejection",
    "", // TODO
  },
  // Confirmations:
  { "Delete channel?",
    "Kanal l�schen?",
    "Odstrani kanal?",
    "Cancello il canale?",
    "Kanaal verwijderen?",
    "Apagar o Canal?",
    "Supprimer la cha�ne?",
    "Slette kanal?",
  },
  { "Delete timer?",
    "Timer l�schen?",
    "Odstani termin?",
    "Cancello il timer?",
    "Timer verwijderen?",
    "Apagar o Alarme?",
    "Supprimer la programmation?",
    "Slette timer?",
  },
  { "Delete recording?",
    "Aufzeichnung l�schen?",
    "Odstrani posnetek?",
    "Cancello la registrazione?",
    "Opname verwijderen?",
    "Apagar Gravac�o?",
    "Supprimer l'enregistrement?",
    "Slette opptak?",
  },
  { "Stop recording?",
    "Aufzeichnung beenden?",
    "Koncaj snemanje?",
    "Fermo la registrazione?",
    "Opname stoppen?",
    "Parar Gravac�o?",
    "Arr�ter l'enregistrement?",
    "Stoppe opptak?",
  },
  { "on primary interface",
    "auf dem prim�ren Interface",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
  },
  { "Cancel editing?",
    "Schneiden abbrechen?",
    "Zelite prekiniti urejanje?",
    "Annullo la modifica?",
    "Bewerken afbreken?",
    "Cancelar Modificar?",
    "Annuler les modifications?",
    "Avbryte redigering",
  },
  { "Recording - shut down anyway?",
    "Aufnahme l�uft - trotzdem ausschalten?",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
  },
  { "Press any key to cancel shutdown",
    "Taste dr�cken um Shutdown abzubrechen",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
  },
  // Channel parameters:
  { "Name",
    "Name",
    "Naziv",
    "Nome",
    "Naam",
    "Nome",
    "Nom",
    "Navn",
  },
  { "Frequency",
    "Frequenz",
    "Frekvenca",
    "Frequenza",
    "Frequentie",
    "Frequencia",
    "Fr�quence",
    "Frekvens",
  },
  { "Polarization",
    "Polarisation",
    "Polarizacija",
    "Polarizzazione",
    "Polarisatie",
    "Polarizacao",
    "Polarisation",
    "Polaritet",
  },
  { "DiSEqC",
    "DiSEqC",
    "DiSEqC",
    "DiSEqC",
    "DiSEqC",
    "DiSEqC",
    "DiSEqC",
    "DiSEqC",
  },
  { "Srate",
    "Srate",
    "Srate",
    "Srate",
    "Srate",
    "Srate",
    "Fr�q. Symbole",
    "Symbolrate",
  },
  { "Vpid",
    "Vpid",
    "Vpid",
    "Vpid",
    "Vpid",
    "Vpid",
    "PID Vid�o",
    "Video pid",
  },
  { "Apid1",
    "Apid1",
    "Apid1",
    "Apid1",
    "Apid1",
    "Apid1",
    "PID Audio (1)",
    "Audio pid1",
  },
  { "Apid2",
    "Apid2",
    "Apid2",
    "Apid2",
    "Apid2",
    "Apid2",
    "PID Audio (2)",
    "Audio pid2",
  },
  { "Dpid1",
    "Dpid1",
    "Dpid1",
    "Dpid1",
    "Dpid1",
    "Dpid1",
    "PID AC3 (1)",
    "AC3 pid1",
  },
  { "Dpid2",
    "Dpid2",
    "Dpid2",
    "Dpid2",
    "Dpid2",
    "Dpid2",
    "PID AC3 (2)",
    "AC3 pid2",
  },
  { "Tpid",
    "Tpid",
    "Tpid",
    "Tpid",
    "Tpid",
    "Tpid",
    "PID T�l�texte",
    "Teletext pid",
  },
  { "CA",
    "CA",
    "CA",
    "CA",
    "CA",
    "CA",
    "Cryptage",
    "Kortleser",
  },
  { "Pnr",
    "Pnr",
    "Pnr",
    "Pnr",
    "Pnr",
    "Pnr",
    "Num. Progr.",
    "Program Id",
  },
  // Timer parameters:
  { "Active",
    "Aktiv",
    "Aktivno",
    "Attivo",
    "Actief",
    "Activo",
    "Actif",
    "Aktiv",
  },
  { "Channel",
    "Kanal",
    "Kanal",
    "Canale",
    "Kanaal",
    "Canal",
    "Cha�ne",
    "Kanal",
  },
  { "Day",
    "Tag",
    "Dan",
    "Giorno",
    "Dag",
    "Dia",
    "Jour",
    "Dag",
  },
  { "Start",
    "Anfang",
    "Zacetek",
    "Inizio",
    "Begin",
    "Inicio",
    "D�but",
    "Start",
  },
  { "Stop",
    "Ende",
    "Konec",
    "Fine",
    "Einde",
    "Fim",
    "Fin",
    "Slutt",
  },
  { "Priority",
    "Priorit�t",
    "Prioriteta",
    "Priorita",
    "Prioriteit",
    "Prioridade",
    "Priorit�",
    "Prioritet",
  },
  { "Lifetime",
    "Lebensdauer",
    "Veljavnost",
    "Durata",
    "Bewaarduur",
    "Duracao",
    "Dur�e de vie",
    "Levetid",
  },
  { "File",
    "Datei",
    "Datoteka",
    "Nome",
    "Filenaam",
    "Ficheiro",
    "Fichier",
    "Filnavn",
  },
  // Error messages:
  { "Channel is being used by a timer!",
    "Kanal wird von einem Timer benutzt!",
    "Urnik zaseda kanal!",
    "Canale occupato da un timer!",
    "Kanaal wordt gebruikt door een timer!",
    "Canal a ser utilizador por um alarme!",
    "Cette cha�ne est en cours d'utilisation!"
    "Kanalen er i bruk av en timer!",
  },
  { "Can't switch channel!",
    "Kanal kann nicht umgeschaltet werden!",
    "Ne morem preklopiti kanala!",
    "Impossibile cambiare canale!",
    "Kan geen kanaal wisselen!",
    "Nao pode mudar de canal!",
    "Impossible de changer de cha�ne!",
    "Ikke mulig � skifte kanal!",
  },
  { "Timer is recording!",
    "Timer zeichnet gerade auf!",
    "Snemanje po urniku!",
    "Registrazione di un timer in corso!",
    "Timer is aan het opnemen!",
    "Alarme a gravar!",
    "Enregistrement en cours!",
    "Timer gj�r opptak!",
  },
  { "Error while accessing recording!",
    "Fehler beim ansprechen der Aufzeichnung!",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
  },
  { "Error while deleting recording!",
    "Fehler beim L�schen der Aufzeichnung!",
    "Napaka pri odstranjevanju posnetka!",
    "Errore durante la canc del filmato!",
    "Fout bij verwijderen opname!",
    "Erro enquanto apagava uma gravacao!",
    "Erreur de suppression de l'enregistrement!",
    "Feil under sletting av opptak!",
  },
  { "*** Invalid Channel ***",
    "*** Ung�ltiger Kanal ***",
    "*** Neznan kanal ***",
    "*** CANALE INVALIDO ***",
    "*** Ongeldig kanaal ***",
    "*** Canal Invalido! ***",
    "*** Cha�ne invalide! ***",
    "*** Ugyldig Kanal! ***",
  },
  { "No free DVB device to record!",
    "Keine freie DVB-Karte zum Aufnehmen!",
    "Ni proste DVB naprave za snemanje!",
    "Nessuna card DVB disp per registrare!",
    "Geen vrije DVB kaart om op te nemen!",
    "Nenhuma placa DVB disponivel para gravar!",
    "Pas de carte DVB disponible pour l'enregistrement!",
    "Ingen ledige DVB enheter for opptak!"
  },
  { "Channel locked (recording)!",
    "Kanal blockiert (zeichnet auf)!",
    "Zaklenjen kanal (snemanje)!",
    "Canale bloccato (in registrazione)!",
    "Kanaal geblokkeerd (neemt op)!",
    "Canal bloqueado (a gravar)!",
    "Cha�ne verrouill�e (enregistrement en cours)!",
    "Kanalen er l�st (opptak)!",
  },
  { "Can't start Transfer Mode!",
    "Transfer-Mode kann nicht gestartet werden!",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
  },
  { "Can't start editing process!",
    "Schnitt kann nicht gestartet werden!",
    "Ne morem zaceti urejanja!",
    "Imposs iniziare processo di modifica",
    "Kan niet beginnen met bewerken!",
    "Nao pode iniciar a modificacao!",
    "Impossible de commencer le montage!",
    "Kan ikke starte redigeringsprosessen!",
  },
  { "Editing process already active!",
    "Schnitt bereits aktiv!",
    "Urejanje je ze aktivno!",
    "Processo di modifica gia` attivo",
    "Bewerken is al actief!",
    "Processo de modificacao ja activo!",
    "Montage d�j� en cours!",
    "Redigeringsprosessen er allerede aktiv!",
  },
  { "Can't shutdown - option '-s' not given!",
    "Shutdown unm�glich - Option '-s' fehlt!",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
  },
  { "Low disk space!",
    "Platte beinahe voll!",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
  },
  // Setup parameters:
  { "OSD-Language",
    "OSD-Sprache",
    "OSD-jezik",
    "Linguaggio OSD",
    "OSD-taal",
    "Linguagem OSD",
    "Langue OSD",
    "OSD Spr�k",
  },
  { "PrimaryDVB",
    "Prim�res Interface",
    "Primarna naprava",
    "Scheda DVB primaria",
    "Eerste DVB kaart",
    "DVB primario",
    "Premi�re carte DVB",
    "Hoved DVB-enhet",
  },
  { "ShowInfoOnChSwitch",
    "Info zeigen",
    "Pokazi naziv kanala",
    "Vis info nel cambio canale",
    "Kanaal info tonen",
    "Mostrar info ao mudar de Canal",
    "Affichage progr. en cours",
    "Info ved kanalskifte",
  },
  { "MenuScrollPage",
    "Seitenweise scrollen",
    "Drsni meni",
    "Scrolla pagina nel menu",
    "Scrollen per pagina",
    "Scroll da pagina no menu",
    "Affichage progr. suivant",
    "Rask rulling i menyer",
  },
  { "MarkInstantRecord",
    "Direktaufz. markieren",
    "Oznaci direktno snemanje",
    "Marca la registrazione",
    "Direkte opnamen markeren",
    "Marca de gravacao",
    "Enregistrement imm�diat",
    "Markere direkteopptak",
  },
  { "LnbSLOF",
    "LnbSLOF",
    "LnbSLOF",
    "LnbSLOF",
    "LnbSLOF",
    "LnbSLOF",
    "Limite de bandes LNB",
    "LO-grensefrekvens",
  },
  { "LnbFrequLo",
    "Untere LNB-Frequenz",
    "Spodnja LNB-frek.",
    "Freq LO LNB",
    "Laagste LNB frequentie",
    "Freq LO LNB",
    "Fr�quence basse LNB",
    "LO-frekvens i lavb�ndet",
  },
  { "LnbFrequHi",
    "Obere LNB-Frequenz",
    "Zgornja LNB-frek.",
    "Freq HI LNB",
    "Hoogste LNB frequentie",
    "Freq HI LNB",
    "Fr�quence haute LNB",
    "LO-frekvens i h�yb�ndet",
  },
  { "DiSEqC",
    "DiSEqC",
    "DiSEqC",
    "DiSEqC",
    "DiSEqC",
    "DiSEqC",
    "DiSEqC",
    "DiSEqC",
  },
  { "SetSystemTime",
    "Systemzeit stellen",
    "Sistemski cas",
    "Setta orario auto",
    "Systeem klok instellen",
    "Ajustar relogio do sistema",
    "Ajuster l'heure du syst�me",
    "Juster system-klokken",
  },
  { "MarginStart",
    "Zeitpuffer bei Anfang",
    "Premor pred zacetkom",
    "Min margine inizio",
    "Tijd marge (begin)",
    "Margem de inicio",
    "Marge ant�rieure",
    "Opptaks margin (start)",
  },
  { "MarginStop",
    "Zeitpuffer bei Ende",
    "Premor za koncem",
    "Min margine fine",
    "Tijd marge (eind)",
    "Margem de fim",
    "Marge post�rieure",
    "Opptaks margin (slutt)",
  },
  { "EPGScanTimeout",
    "Zeit bis EPG Scan",
    "Cas do EPG pregleda",
    "Timeout EPG",
    "EPG-scan Timeout",
    "Timeout EPG",
    "Temps maxi EPG",
    "Ledig tid f�r EPG-s�k",
  },
  { "EPGBugfixLevel",
    "EPG Fehlerbereinigung",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
  },
  { "SVDRPTimeout",
    "SVDRP Timeout",
    "", // TODO
    "Timeout SVDRP",
    "SVDRP Timeout",
    "Timeout SVDRP",
    "Temps maxi SVDRP",
    "Ubrukt SVDRP-levetid",
  },
  { "SortTimers",
    "Timer sortieren",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
  },
  { "PrimaryLimit",
    "Prim�r-Limit",
    "", // TODO
    "", // TODO
    "", // TODO
    "Limite Primario",
    "Premi�re limite",
    "Prioritets grense HovedDVB",
  },
  { "DefaultPriority",
    "Default Priorit�t",
    "", // TODO
    "", // TODO
    "", // TODO
    "Prioridade por defeito",
    "Priorit� par d�faut",
    "Normal prioritet (Timer)",
  },
  { "DefaultLifetime",
    "Default Lebensdauer",
    "", // TODO
    "", // TODO
    "", // TODO
    "Validade por defeito",
    "Dur�e de vie par d�faut",
    "Normal levetid (Timer)",
  },
  { "UseSubtitle",
    "Subtitle verwenden",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
  },
  { "RecordingDirs",
    "Aufn. Verzeichnisse",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
  },
  { "VideoFormat",
    "Video Format",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "Format vid�o",
    "TV Format",
  },
  { "ChannelInfoPos",
    "Kanal Info Position",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "Position infos cha�nes",
    "", // TODO
  },
  { "OSDwidth",
    "OSD Breite",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "Largeur affichage",
    "", // TODO
  },
  { "OSDheight",
    "OSD H�he",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "Hauteur affichage",
    "", // TODO
  },
  { "OSDMessageTime",
    "OSD Nachricht Dauer",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
  },
  { "MaxVideoFileSize",
    "Max. Video Dateigr��e",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
  },
  { "SplitEditedFiles",
    "Editierte Dateien zerteilen",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
  },
  { "MinEventTimeout",
    "Mindest Event Pause",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
  },
  { "MinUserInactivity",
    "Mindest User Inaktivit�t",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
  },
  { "MultiSpeedMode",
    "MultiSpeed Modus",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
  },
  { "ShowReplayMode",
    "Wiedergabe Status",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
  },
  // The days of the week:
  { "MTWTFSS",
    "MDMDFSS",
    "PTSCPSN",
    "DLMMGVS",
    "MDWDVZZ",
    "STQQSSD",
    "LMMJVSD",
    "MTOTFLS",
  },
  { "MonTueWedThuFriSatSun", // must all be 3 letters!
    "MonDieMitDonFreSamSon",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
  },
  // Learning keys:
  { "Learning Remote Control Keys",
    "Fernbedienungs-Codes lernen",
    "Ucim se kod upravljalca",
    "Apprendimento tasti unita` remota",
    "Leren toetsen afstandsbediening",
    "Aprender as teclas do telecomando",
    "Apprentissage des codes de t�l�commande",
    "L�re fjernkontrolltaster",
  },
  { "Phase 1: Detecting RC code type",
    "Phase 1: FB Code feststellen",
    "Faza 1: Sprejemanje IR kode",
    "Fase 1: tipo ricevitore RC",
    "Fase 1: detecteren type afstandsbediening",
    "Fase 1: detectar tipo de receptor",
    "Phase 1: D�tection du type de code",
    "Fase 1: Finne fjernkontroll-kodetype",
  },
  { "Press any key on the RC unit",
    "Eine Taste auf der FB dr�cken",
    "Pritisnite tipko na upravljalcu",
    "Premere un tasto nell'unita` RC",
    "Druk op een willekeurige knop",
    "Pressione qualquer tecla do telecomando", 
    "Appuyer sur une touche de la t�l�commande",
    "Trykk en av tastene p� fjernkontrollen",
  },
  { "RC code detected!",
    "FB Code erkannt!",
    "IR koda sprejeta!",
    "Codice RC rilevato!",
    "Afstandsbediening code herkend!",
    "Codigo do telecomando detectado!",
    "Code de la t�l�commande d�tect�!",
    "Fjernkontroll-kodetype funnet!",
  },
  { "Do not press any key...",
    "Keine Taste dr�cken...",
    "Ne pritiskajte tipk...",
    "Non premere alcun tasto...",
    "Druk niet op een knop...",
    "Nao pressione nada...",
    "Ne pas appuyer sur une touche ...",
    "Ikke trykk p� noen av tastene...",
  },
  { "Phase 2: Learning specific key codes",
    "Phase 2: Einzelne Tastencodes lernen",
    "Faza 2: Ucenje posebnih kod",
    "Fase 2: Codici specifici dei tasti",
    "Fase 2: Leren specifieke toets-codes",
    "Fase 2: A aprender codigos especificos",
    "Phase 2: Apprentissage des codes des touches",
    "Fase 2: L�re spesifikke tastekoder",
  },
  { "Press key for '%s'",
    "Taste f�r '%s' dr�cken",
    "Pritisnite tipko za '%s'",
    "Premere il tasto per '%s'",
    "Druk knop voor '%s'",
    "Pressione tecla para '%s'",
    "Appuyer sur la touche '%s'",
    "Trykk tasten for '%s'",
  },
  { "Press 'Up' to confirm",
    "'Auf' dr�cken zum Best�tigen",
    "Pritisnite tipko 'Gor' za potrditev",
    "Premere 'Su' per confermare",
    "Druk 'Omhoog' om te bevestigen",
    "Pressione 'Cima' para confirmar",
    "Appuyer sur 'Haut' pour confirmer",
    "Trykk 'Opp' for � bekrefte",
  },
  { "Press 'Down' to continue",
    "'Ab' dr�cken zum Weitermachen",
    "Pritisnite tipko 'Dol' za nadaljevanje",
    "Premere 'Giu' per confermare",
    "Druk 'Omlaag' om verder te gaan",
    "Pressione 'Baixo' para continuar",
    "Appuyer sur 'Bas' pour continuer",
    "Trykk Ned' for � fortsette",
  },
  { "(press 'Up' to go back)",
    "('Auf' dr�cken um zur�ckzugehen)",
    "(pritisnite 'Gor' za nazaj)",
    "(premere 'Su' per tornare indietro)",
    "(druk 'Omhoog' om terug te gaan)",
    "(Pressione 'Cima' para voltar)",
    "(Appuyer sur 'Haut' pour revenir en arri�re)",
    "(trykk 'Opp' for � g� tilbake)",
  },
  { "(press 'Down' to end key definition)",
    "('Ab' dr�cken zum Beenden)",
    "(pritisnite 'Dol' za konec)",
    "('Giu' per finire la definiz tasti)",
    "(Druk 'Omlaag' om te beeindigen)",
    "(Pressione 'Baixo' para terminar a definicao)",
    "(Appuyer sur 'Bas' pour terminer)",
    "(trykk 'Ned' for � avslutte innl�ring)",
  },
  { "Phase 3: Saving key codes",
    "Phase 3: Codes abspeichern",
    "Faza 3: Shranjujem kodo",
    "Fase 3: Salvataggio key codes",
    "Fase 3: Opslaan toets codes",
    "Fase 3: A Salvar os codigos das teclas",
    "Phase 3: Sauvegarde des codes des touches",
    "Fase 3: Lagre tastekoder",
  },
  { "Press 'Up' to save, 'Down' to cancel",
    "'Auf' speichert, 'Ab' bricht ab",
    "'Gor' za potrditev, 'Dol' za prekinitev",
    "'Su' per salvare, 'Giu' per annullare",
    "'Omhoog' te bewaren, 'Omlaag' voor annuleren",
    "'Cima' para Salvar, 'Baixo' para Cancelar",
    "Appuyer sur 'Haut' pour sauvegarder, 'Bas' pour annuler",
    "Trykk 'Opp' for � lagre, 'Ned' for � avbryte",
  },
  // Key names:
  { "Up",
    "Auf",
    "Gor",
    "Su",
    "Omhoog",
    "Cima",
    "Haut",
    "Opp",
  },
  { "Down",
    "Ab",
    "Dol",
    "Giu",
    "Omlaag",
    "Baixo",
    "Bas",
    "Ned",
  },
  { "Menu",
    "Men�",
    "Meni",
    "Menu",
    "Menu",
    "Menu",
    "Menu",
    "Meny",
  },
  { "Ok",
    "Ok",
    "Ok",
    "Ok",
    "Ok",
    "Ok",
    "Ok",
    "Ok",
  },
  { "Back",
    "Zur�ck",
    "Nazaj",
    "Indietro",
    "Terug",
    "Voltar",
    "Retour",
    "Tilbake",
  },
  { "Left",
    "Links",
    "Levo",
    "Sinistra",
    "Links",
    "Esquerda",
    "Gauche",
    "Venstre",
  },
  { "Right",
    "Rechts",
    "Desno",
    "Destra",
    "Rechts",
    "Direita",
    "Droite",
    "H�yre",
  },
  { "Red",
    "Rot",
    "Rdeca",
    "Rosso",
    "Rood",
    "Vermelho",
    "Rouge",
    "R�d",
  },
  { "Green",
    "Gr�n",
    "Zelena",
    "Verde",
    "Groen",
    "Verde",
    "Vert",
    "Gr�nn",
  },
  { "Yellow",
    "Gelb",
    "Rumena",
    "Giallo",
    "Geel",
    "Amarelo",
    "Jaune",
    "Gul",
  },
  { "Blue",
    "Blau",
    "Modra",
    "Blu",
    "Blauw",
    "Azul",
    "Bleu",
    "Bl�",
  },
  { "Power",
    "Ausschalten",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
  },
  { "Volume+",
    "Lautst�rke+",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
  },
  { "Volume-",
    "Lautst�rke-",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
  },
  { "Mute",
    "Stumm",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
  },
  // Miscellaneous:
  { "yes",
    "ja",
    "da",
    "si",
    "ja",
    "sim",
    "oui",
    "ja",
  },
  { "no",
    "nein",
    "ne",
    "no",
    "nee",
    "nao",
    "non",
    "nei",
  },
  { "top",
    "oben",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "haut",
    "", // TODO
  },
  { "bottom",
    "unten",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "bas",
    "", // TODO
  },
  { "free",
    "frei",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
  },
  { "Jump: ", // note the trailing blank
    "Springen: ",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
  },
  { " Stop replaying", // note the leading blank!
    " Wiedergabe beenden",
    " Prekini ponavljanje",
    " Interrompi riproduzione",
    " Stop afspelen",
    " Parar reproducao",
    " Arr�ter la lecture",
    " Stopp avspilling",
  },
  { " Stop recording ", // note the leading and trailing blanks!
    " Aufzeichnung beenden ",
    " Prekini shranjevanje ",
    " Interrompi registrazione ",
    " Stop opnemen ",
    " Parar gravacao ",
    " Arr�ter l'enregistrement ",
    " Stopp opptak fra ",
  },
  { " Cancel editing", // note the leading blank!
    " Schneiden abbrechen",
    " Prekini urejanje",
    " Annulla modifiche",
    " Bewerken afbreken",
    " Anular modificacao",
    " Annuler le montage",
    " Avbryt editering",
  },
  { "Switching primary DVB...",
    "Prim�res Interface wird umgeschaltet...",
    "Preklapljanje primarne naprave...",
    "Cambio su card DVB primaria...",
    "Eerste DVB-kaart wordt omgeschakeld...",
    "A mudar placa DVB primaria...",
    "Changement de carte DVB principale...",
    "Bytter hoved DVB-enhet... ",
  },
  { "Up/Dn for new location - OK to move",
    "Auf/Ab f�r neue Position - dann OK",
    "Gor/Dol za novo poz. - Ok za premik",
    "Su/Giu per nuova posizione - OK per muovere",
    "Gebruik Omhoog/Omlaag - daarna Ok",
    "Cima/Baixo para nova localizacao - Ok para mudar",
    "Haut/Bas -> nouvelle place - OK -> d�placer",
    "Opp/Ned for ny plass - OK for � flytte",
  },
  { "Editing process started",
    "Schnitt gestartet",
    "Urejanje se je zacelo",
    "Processo di modifica iniziato",
    "Bewerken is gestart",
    "Processo de modificacao iniciado",
    "Op�ration de montage lanc�e",
    "Redigeringsprosess startet",
  },
  { "Editing process finished",
    "Schnitt beendet",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
  },
  { "Editing process failed!",
    "Schnitt gescheitert!",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
  },
  { "scanning recordings...",
    "Aufzeichnungen werden durchsucht...",
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
    "", // TODO
  },
  { NULL }
  };

const char *tr(const char *s)
{
  if (Setup.OSDLanguage) {
     for (const tPhrase *p = Phrases; **p; p++) {
         if (strcmp(s, **p) == 0) {
            const char *t = (*p)[Setup.OSDLanguage];
            if (t && *t)
               return t;
            }
         }
     esyslog(LOG_ERR, "no translation found for '%s' in language %d (%s)\n", s, Setup.OSDLanguage, Phrases[0][Setup.OSDLanguage]);
     }
  return s;
}

const char * const * Languages(void)
{
  return &Phrases[0][0];
}
