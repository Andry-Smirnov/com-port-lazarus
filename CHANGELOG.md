# Version history

## 4.11 July 2011

- Fixed version constant
- Fixed spelling in property

## 4.1 Jan 2011

- Delphi XE support
- Fixed C++Builder support.

## 4.0

- Various upgrades and unit refactorings

## 3.1  December 24, 2005

- by Paul Doland:
  - Added Delphi 2006 support

- by Leroy Casterline:
  - Fixed bug in setting length of strings returned by EnumComPorts.  

- By Gerard van der Sel:
  - Make a difference between and clearpage (`Ctrl`+`L`). Now a clearpage wipe the terminal  complete in stead of only one linefeed.
  - Add colors to the terminal conform VT100 spec.

## 3.0

- Delphi 2005 support.

## 2.64 (18.03.2003)

- Delphi 7 support

## 2.64 (3.10.2002)

- C++ Builder 6 support

## 2.63 (3.9.2001)

- Delphi 6 support
- `TComStream` class
- `TComPort.EventThreadPriority` property
- `EnumComPorts` non-admin (WinNT/2000) bug fixed
- Fixed hang up bug on port close
- Other minor fixes

## 2.62 (1.2.2001)

- Bug fix
- Optimization

## 2.61a R2 (31.7.2000)

- C++ Builder examples added

## 2.61a (29.6.2000)

- `TComTerminal.WantTab` property
- `TComDataPacket.AddData` method
- Many small fixes

## 2.61 (11.6.2000)

- `TComDataPacket` supports custom packet forming
- `TComTerminal` `LoadFromStream`/`SaveToStream` methods
- `lsConn` signal support in `TComLed`
- Other minor changes

## 2.60 (1.5.2000)

- `TComTerminal` component
- `WaitForEvent` method in `TComPort` component

## 2.52 (30.3.2000)

- C++ Builder support added by Paul Doland
- `Rx` and `Tx` signal support in `TComLed`

## 2.51 (3.3.2000)

- `OnAfterOpen`, `OnAfterClose`, `OnBeforeClose`, `OnBeforeOpen` events
- Support for custom baud rate values
- Other minor changes and fixes

## 2.50 (10.2.2000)

- New components:
  - `TComDataPacket`,
  - `TComComboBox`,
  - `TComRadioGroup`
  - `TComLed`
- `BeginUpdate`, `EndUpdate` methods
- `StoreSettings`, `LoadSettings` methods
- `TComFlowControl.FlowControl` property
- Bug fix and code optimization

## 2.01 (1.11.1999)

- Added `EnumComPorts` procedure
- `Port` property changed to `PortNum` (now `String` type property)

## 2.00 (17.10.1999)

- New concept of calling asynchronous operations
- Some new properties, methods
- Code optimization, simplification
- Help file included

## 1.71 (27.05.1999)

- A bug fix!

## 1.70 (28.04.1999)

- New methods:
  - `SetDTR`,
  - `SetRTS`,
  - `SetBreak`,
  - `SetXonXoff`
- Properties can be changed during a session

## 1.60 (10.04.1999)

- New properties:
  - `EventChar`,
  - `DiscardNull`,
  - `SyncMethod`
- Extended `Parity` property
- Fixed compilation problems
- Other bug fixes

## 1.50 (13.03.1999)

- Read/Write operations in asynchronous/synchronous mode
- Added `OnRx80Full` event
- Extended flow control
- Added `Timeouts` property

## 1.01 (24.10.1998)

- Added more signal detection functions.
- Added this documentation.
- Added `PurgeOut` function.
- Fixed some minor bugs.

## 1.00 (29.09.1998)

- Basic version of the component
