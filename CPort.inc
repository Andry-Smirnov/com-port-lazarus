{ ComPort Library global definitions }

{$B-}
{$X+}
{$H+}

{$IFDEF VER110}     { C++ Builder 3 }
  {$ObjExportAll On}
{$ENDIF}

{$IFDEF VER120}     { Delphi 4 }
  {$DEFINE DELPHI_4_OR_HIGHER}
  {$DEFINE DELPHI_4}
{$ENDIF}

{$IFDEF VER125}     { C++ Builder 4 }
  {$DEFINE DELPHI_4_OR_HIGHER}
  {$DEFINE DELPHI_4}
  {$ObjExportAll On}
{$ENDIF}

{$IFDEF VER130}     { Delphi 5 and C++ Builder 5 }
  {$DEFINE DELPHI_4_OR_HIGHER}
  {$DEFINE DELPHI_5_OR_HIGHER}
  {$DEFINE DELPHI_5}
  {$IFDEF BCBNOTDELPHI}
    {$ObjExportAll On}
  {$ENDIF}
{$ENDIF}

{$IFDEF VER140}     { Delphi 6 and C++ Builder 6}
  {$DEFINE DELPHI_4_OR_HIGHER}
  {$DEFINE DELPHI_5_OR_HIGHER}
  {$DEFINE DELPHI_6_OR_HIGHER}
  {$DEFINE DELPHI_6}
  {$IFDEF BCBNOTDELPHI}
    {$ObjExportAll On}
  {$ENDIF}
{$ENDIF}

{$IFDEF VER150}     { Delphi 7 }
  {$DEFINE DELPHI_4_OR_HIGHER}
  {$DEFINE DELPHI_5_OR_HIGHER}
  {$DEFINE DELPHI_6_OR_HIGHER}
  {$DEFINE DELPHI_7_OR_HIGHER}
  {$DEFINE DELPHI_7}
  {$IFDEF BCBNOTDELPHI}
    {$ObjExportAll On}
  {$ENDIF}
  {$WARN UNSAFE_TYPE OFF}
  {$WARN UNSAFE_CODE OFF}
  {$WARN UNSAFE_CAST OFF}
{$ENDIF}

{$IFDEF VER170}     { Delphi 2005 (Delphi 9) }
  {$DEFINE DELPHI_4_OR_HIGHER}
  {$DEFINE DELPHI_5_OR_HIGHER}
  {$DEFINE DELPHI_6_OR_HIGHER}
  {$DEFINE DELPHI_7_OR_HIGHER}
  {$DEFINE DELPHI_9_OR_HIGHER}
  {$DEFINE DELPHI_9}
  {$IFDEF BCBNOTDELPHI}
    {$ObjExportAll On}
  {$ENDIF}
  {$WARN UNSAFE_TYPE OFF}
  {$WARN UNSAFE_CODE OFF}
  {$WARN UNSAFE_CAST OFF}
{$ENDIF}
