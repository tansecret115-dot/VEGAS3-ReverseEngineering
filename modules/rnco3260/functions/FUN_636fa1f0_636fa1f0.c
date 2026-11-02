/* Module: rnco3260.dll
   Function: FUN_636fa1f0
   Address: 636fa1f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fa1f0(char *param_1,int param_2,ushort *param_3,int param_4)

{
  ushort uVar1;
  char *pcVar2;
  ushort *puVar3;
  
  puVar3 = param_3;
  param_3 = (ushort *)param_2;
  pcVar2 = param_1;
  param_1 = (char *)(param_2 >> 1);
  if (param_2 == 0) {
    return;
  }
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    do {
      *pcVar2 = (char)uVar1 << 3;
      pcVar2[1] = (byte)(uVar1 >> 3) & 0xfc;
      pcVar2[2] = (byte)(uVar1 >> 8) & 0xf8;
      pcVar2 = pcVar2 + 3;
      param_3 = (ushort *)((int)param_3 + -1);
      if (param_3 == (ushort *)0x0) {
        return;
      }
      param_1 = param_1 + -param_4;
    } while (-1 < (int)param_1);
    param_1 = param_1 + param_2;
  } while( true );
}


