/* Module: encn3260.dll
   Function: FUN_664b42f0
   Address: 664b42f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664b42f0(void *this,HDC param_1)

{
  int iMode;
  int iVar1;
  HFONT pHVar2;
  HGDIOBJ pvVar3;
  int nDenominator;
  
  if (*(int *)((int)this + 0x1634) == 0) {
    iMode = SetMapMode(param_1,1);
    nDenominator = 0x48;
    iVar1 = GetDeviceCaps(param_1,0x5a);
    iVar1 = MulDiv(0x32,iVar1,nDenominator);
    pHVar2 = CreateFontA(-iVar1,0,0,0,400,0,0,0,0,0,0,0,0,s_Ariel_664e365c);
    *(HFONT *)((int)this + 0x1634) = pHVar2;
    SetMapMode(param_1,iMode);
  }
  pvVar3 = SelectObject(param_1,*(HGDIOBJ *)((int)this + 0x1634));
  *(HGDIOBJ *)((int)this + 0x1638) = pvVar3;
  return;
}


