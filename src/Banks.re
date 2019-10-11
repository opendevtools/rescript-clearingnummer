type banks =
  | Alandsbanken
  | Amfa
  | Avanza
  | BankernasAutomatbolag
  | BankOfChina
  | Bluestep
  | Calyon
  | Citibank
  | Danske
  | DNB
  | Ekobanken
  | ErikPenser
  | Exchange
  | Folkia
  | Forex
  | Fortis
  | GE
  | Handelsbanken
  | ICA
  | IKANO
  | JAK
  | Kommuninvest
  | Kortaccept
  | Landshypotek
  | LSB
  | Lansforsakringar
  | Marginalen
  | MedMera
  | Nasdaq
  | Netfonds
  | Nordax
  | Nordea
  | Nordnet
  | Pareto
  | Privatgirot
  | RBS
  | Resurs
  | Riksbanken
  | Riksgalden
  | SBAB
  | SEB
  | Skandia
  | Sparbanken
  | SWED
  | SWEDFryksdalen
  | SWEDGotland
  | SWEDKindra
  | SWEDLekeberg
  | SWEDMarkaryd
  | SWEDMonsteras
  | SWEDNars
  | SWEDSkaraborg
  | SWEDSkurup
  | SWEDSolvesborg
  | SWEDVarberg
  | TellerNorway
  | TellerSweden
  | Volvo
  | VP
  | Unknown;

let getBankName =
  fun
  | Alandsbanken => {j|Ålandsbanken|j}
  | Amfa => "Amfa Bank"
  | Avanza => "Avanza Bank"
  | BankernasAutomatbolag => "Bankernas Automatbolag"
  | BankOfChina => "Bank of China (Luxembourg)"
  | Bluestep => "Bluestep Finans"
  | Calyon => "Calyon Bank"
  | Citibank => "Citibank"
  | Danske => "Danske Bank"
  | DNB => "DNB Bank"
  | Ekobanken => "Ekobanken"
  | ErikPenser => "Erik Penser Bankaktiebolag"
  | Exchange => "Exchange Finans Europe"
  | Folkia => "Folkia"
  | Forex => "Forex Bank"
  | Fortis => "Fortis Bank"
  | GE => "GE Money Bank"
  | Handelsbanken => "Handelsbanken"
  | ICA => "ICA Banken"
  | IKANO => "IKANO Bank"
  | JAK => "JAK Medlemsbank"
  | Kommuninvest => "Kommuninvest"
  | Kortaccept => "Kortaccept Nordic"
  | Landshypotek => "Landshypotek"
  | LSB => {j|Lån & Spar Bank|j}
  | Lansforsakringar => {j|Länsförsäkringar Bank|j}
  | Marginalen => "Marginalen Bank"
  | MedMera => "MedMera Bank"
  | Nasdaq => "Nasdaq-OMX"
  | Netfonds => "Netfonds Bank (ub)"
  | Nordax => "Nordax Finans"
  | Nordea => "Nordea"
  | Nordnet => "Nordnet Bank"
  | Pareto => {j|Pareto Öhman|j}
  | Privatgirot => "Privatgirot"
  | RBS => "RBS"
  | Resurs => "Resurs Bank"
  | Riksbanken => "Sveriges Riksbank"
  | Riksgalden => {j|Riksgälden|j}
  | SBAB => "SBAB Bank"
  | SEB => "SEB"
  | Skandia => "Skandiabanken"
  | Sparbanken => "Sparbanken Syd"
  | SWED => "Swedbank"
  | SWEDGotland => "Sparbanken Gotland"
  | SWEDFryksdalen => "Fryksdalens sparbank"
  | SWEDKindra => "Kinda-Ydre sparbank"
  | SWEDLekeberg => "Lekebergs sparbank"
  | SWEDMarkaryd => "Markaryds sparbank"
  | SWEDMonsteras => {j|Häradssparbanken Mönsterås|j}
  | SWEDNars => {j|Närs sparbank|j}
  | SWEDSkaraborg => "Sparbanken Skaraborg"
  | SWEDSkurup => "Skurups sparbank"
  | SWEDSolvesborg => {j|Sölvesborg-Mjällby sparbank|j}
  | SWEDVarberg => "Varbergs sparbank"
  | TellerNorway => "Teller Branch Norway"
  | TellerSweden => "Teller Branch Sweden"
  | Volvo => "Volvofinans Bank"
  | VP => "VP Securities A/S"
  | Unknown => "";

let all =
  [|
    Amfa,
    Avanza,
    BankernasAutomatbolag,
    BankOfChina,
    Bluestep,
    Calyon,
    Citibank,
    Danske,
    DNB,
    Ekobanken,
    ErikPenser,
    Exchange,
    Folkia,
    Forex,
    Fortis,
    GE,
    Handelsbanken,
    ICA,
    IKANO,
    JAK,
    Kommuninvest,
    Kortaccept,
    Landshypotek,
    LSB,
    Lansforsakringar,
    Marginalen,
    MedMera,
    Nasdaq,
    Netfonds,
    Nordax,
    Nordea,
    Nordnet,
    Pareto,
    Privatgirot,
    RBS,
    Resurs,
    Riksbanken,
    Riksgalden,
    SBAB,
    SEB,
    Skandia,
    Sparbanken,
    SWED,
    SWEDFryksdalen,
    SWEDGotland,
    SWEDKindra,
    SWEDLekeberg,
    SWEDMarkaryd,
    SWEDMonsteras,
    SWEDNars,
    SWEDSkaraborg,
    SWEDSkurup,
    SWEDSolvesborg,
    SWEDVarberg,
    TellerNorway,
    TellerSweden,
    Volvo,
    VP,
    Alandsbanken,
  |]
  ->Belt.Array.map(item => getBankName(item));
