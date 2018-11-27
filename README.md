# bs-clearingnummer

Sort codes, _clearingnummer_ in Swedish, are four or five digit identifiers for Swedish banks. This package helps you find the bank related to a specific number. All clearing numbers are taken from [Wikipedia](http://www.wikiwand.com/sv/Lista_%C3%B6ver_clearingnummer_till_svenska_banker) and [Swedish Bankers Association](http://www.swedishbankers.se/media/3535/1710_clearingnummer-institut.pdf).

This is a semi-port of my JavaScript library [Clearingnummer](https://github.com/believer/clearingnummer) written completely in Reason.

## Get started

```bash
$ git clone https://github.com/believer/bs-clearingnummer
$ cd bs-clearingnummer
$ npm install
$ npm start
```

## Functions

### bankNameByInteger

```ocaml
let bankName = Clearingnummer.bankNameByInteger(5202)
(* bankName = "SEB" *)
```

### bankNameByString

Used by Swedbank and their old bank names (sparbanker)

```ocaml
let bankName = Clearingnummer.bankNameByString("8060-6")
(* bankName = "Swedbank" *)
```

### allBanks

```ocaml
let banks = Clearingnummer.allbanks("8060-6")
(* banks = ["Amfa Bank", "Avanza Bank", ...] *)
```

## Tests

Build JavaScript files first using `npm run build` or `npm run start`

```bash
$ npm test
```
