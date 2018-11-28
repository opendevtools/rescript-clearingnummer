open Banks;

let isInRange = Utils.isInRange;

let bankNameByInteger = clearingNumber =>
  (
    switch (clearingNumber) {
    | c when c->isInRange(1000, 1099) => Riksbanken
    | c when c->isInRange(1100, 1199) => Nordea
    | c when c->isInRange(1200, 1399) => Danske
    | c when c->isInRange(1400, 2099) => Nordea
    | c when c->isInRange(2300, 2399) => Alandsbanken
    | c when c->isInRange(2400, 2499) => Danske
    | c when c->isInRange(3000, 3399) => Nordea
    | c when c->isInRange(3400, 3409) => Lansforsakringar
    | c when c->isInRange(3410, 4999) => Nordea
    | c when c->isInRange(5000, 5999) => SEB
    | c when c->isInRange(6000, 6999) => Handelsbanken
    | c when c->isInRange(7000, 8999) => SWED
    | c when c->isInRange(9020, 9029) => Lansforsakringar
    | c when c->isInRange(9040, 9049) => Citibank
    | c when c->isInRange(9060, 9069) => Lansforsakringar
    | c when c->isInRange(9080, 9089) => Calyon
    | c when c->isInRange(9090, 9099) => RBS
    | c when c->isInRange(9100, 9109) => Nordnet
    | c when c->isInRange(9120, 9124) => SEB
    | c when c->isInRange(9130, 9149) => SEB
    | c when c->isInRange(9150, 9169) => Skandia
    | c when c->isInRange(9170, 9179) => IKANO
    | c when c->isInRange(9180, 9189) => Danske
    | c when c->isInRange(9190, 9199) => DNB
    | c when c->isInRange(9230, 9239) => Marginalen
    | c when c->isInRange(9250, 9259) => SBAB
    | c when c->isInRange(9260, 9269) => DNB
    | c when c->isInRange(9270, 9279) => ICA
    | c when c->isInRange(9280, 9289) => Resurs
    | c when c->isInRange(9300, 9349) => SWED
    | c when c->isInRange(9380, 9389) => Pareto
    | c when c->isInRange(9390, 9399) => Landshypotek
    | c when c->isInRange(9400, 9449) => Forex
    | c when c->isInRange(9460, 9469) => GE
    | c when c->isInRange(9470, 9479) => Fortis
    | c when c->isInRange(9500, 9549) => Nordea
    | c when c->isInRange(9550, 9569) => Avanza
    | c when c->isInRange(9570, 9579) => Sparbanken
    | c when c->isInRange(9580, 9589) => Exchange
    | c when c->isInRange(9590, 9599) => ErikPenser
    | c when c->isInRange(9610, 9619) => Volvo
    | c when c->isInRange(9620, 9629) => BankOfChina
    | c when c->isInRange(9630, 9639) => LSB
    | c when c->isInRange(9640, 9649) => Nordax
    | c when c->isInRange(9650, 9659) => MedMera
    | c when c->isInRange(9660, 9669) => Amfa
    | c when c->isInRange(9670, 9679) => JAK
    | c when c->isInRange(9680, 9689) => Bluestep
    | c when c->isInRange(9690, 9699) => Folkia
    | c when c->isInRange(9700, 9709) => Ekobanken
    | c when c->isInRange(9720, 9729) => Netfonds
    | c when c->isInRange(9860, 9869) => Privatgirot
    | c when c->isInRange(9870, 9879) => Nasdaq
    | c when c->isInRange(9880, 9899) => Riksgalden
    | c when c->isInRange(9960, 9969) => Nordea
    | 9951 => TellerNorway
    | 9952 => BankernasAutomatbolag
    | 9953 => TellerSweden
    | 9954 => Kortaccept
    | 9955 => Kommuninvest
    | 9956 => VP
    | _ => Unknown
    }
  )
  ->getBankName;

let bankNameByString = clearingNumber =>
  (
    switch (clearingNumber) {
    | "8060-6"
    | "8079-6"
    | "8304-8"
    | "8305-5"
    | "8313-9"
    | "8314-7"
    | "8327-9"
    | "8383-2"
    | "8393-1"
    | "8431-9"
    | "8424-4" => SWED
    | "8336-0" => SWEDFryksdalen
    | "8055-6" => SWEDGotland
    | "8158-8" => SWEDKindra
    | "8164-6" => SWEDLekeberg
    | "8217-2" => SWEDMarkaryd
    | "8331-1" => SWEDMonsteras
    | "8250-3" => SWEDNars
    | "8289-1" => SWEDSkaraborg
    | "8295-8" => SWEDSkurup
    | "8321-2" => SWEDSolvesborg
    | "8388-1" => SWEDVarberg
    | _ => Unknown
    }
  )
  ->getBankName;

let allBanks =
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
