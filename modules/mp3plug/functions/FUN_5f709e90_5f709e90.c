/* Module: mp3plug.dll
   Function: FUN_5f709e90
   Address: 5f709e90
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __cdecl FUN_5f709e90(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_5f6d9760(0x1208);
  if (piVar1 != (int *)0x0) {
    piVar2 = piVar1;
    do {
      piVar2[2] = 0;
      piVar2[3] = 0;
      piVar2 = piVar2 + 2;
    } while ((int)piVar2 < (int)(piVar1 + 0x480));
    iVar3 = DAT_5f75ab40;
    if (DAT_5f75ab40 == 0) {
      iVar3 = FUN_5f70b650();
      DAT_5f75ab40 = 1;
    }
    if (param_2 == 0) {
      iVar3 = 8;
    }
    else if ((param_2 == 1) || (param_2 == 2)) {
      iVar3 = 6;
    }
    piVar1[1] = *(int *)(param_3 + 100 + iVar3 * 4);
    *piVar1 = *(int *)(param_3 + 100 + iVar3 * 4) / 0x12;
    return piVar1;
  }
  return (int *)0x0;
}


