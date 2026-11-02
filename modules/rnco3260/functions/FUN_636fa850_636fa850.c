/* Module: rnco3260.dll
   Function: FUN_636fa850
   Address: 636fa850
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fa850(char *param_1,int param_2,ushort *param_3,int param_4)

{
  ushort uVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = param_1;
  iVar3 = param_2;
  param_1 = (char *)(param_2 >> 1);
  if (param_2 == 0) {
    return;
  }
  do {
    uVar1 = *param_3;
    param_3 = param_3 + 1;
    do {
      *pcVar2 = (char)uVar1 << 3;
      pcVar2[1] = (byte)(uVar1 >> 2) & 0xf8;
      pcVar2[2] = (byte)(uVar1 >> 7) & 0xf8;
      pcVar2 = pcVar2 + 3;
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        return;
      }
      param_1 = param_1 + -param_4;
    } while (-1 < (int)param_1);
    param_1 = param_1 + param_2;
  } while( true );
}


