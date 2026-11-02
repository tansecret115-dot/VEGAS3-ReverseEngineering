/* Module: vegas30k.dll
   Function: cdr_FormatLBAEx
   Address: 01099e90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* int __stdcall cdr_FormatLBAEx(char *,unsigned long,unsigned long,unsigned int) */

int cdr_FormatLBAEx(char *param_1,ulong param_2,ulong param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  double dVar3;
  ulong local_1c [3];
  _cdrhmsf local_10 [16];
  
                    /* 0x99e90  595  ?cdr_FormatLBAEx@@YGHPADKKI@Z */
  switch(param_4) {
  case 0:
    cdr_LBAToMSF((_cdrmsf *)local_1c,param_2);
    iVar2 = cdr_FormatMSF(param_1,(_cdrmsf *)local_1c);
    return iVar2;
  default:
    cdr_LBAToHMSF(local_10,param_2);
    iVar2 = cdr_FormatHMSF(param_1,local_10);
    return iVar2;
  case 2:
    break;
  case 3:
    break;
  case 4:
    dVar3 = _DAT_011e2940;
    if (param_3 != 1) {
      dVar3 = _DAT_011e2948;
    }
    local_1c[1] = 0;
    local_1c[0] = param_2;
    dVar3 = (double)param_2 * dVar3 * _DAT_011e2938;
    uVar1 = _SfGetString2_8(DAT_0120e5c8,0x111c);
    SfPrintF(param_1,uVar1,dVar3);
    iVar2 = lstrlenA(param_1);
    return iVar2;
  }
  SfPrintF(param_1,&DAT_011e2810);
  iVar2 = lstrlenA(param_1);
  return iVar2;
}


