/* Module: rnco3260.dll
   Function: FUN_636fa070
   Address: 636fa070
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fa070(int param_1,int param_2,ushort *param_3,int param_4)

{
  ushort uVar1;
  byte *pbVar2;
  ushort *puVar3;
  int iVar4;
  
  puVar3 = param_3;
  param_3 = (ushort *)param_2;
  iVar4 = param_4 >> 1;
  if (param_2 != 0) {
    pbVar2 = (byte *)(param_1 + 2);
    do {
      uVar1 = *puVar3;
      pbVar2[-2] = (char)uVar1 << 3;
      pbVar2[-1] = (byte)(uVar1 >> 3) & 0xfc;
      *pbVar2 = (byte)(uVar1 >> 8) & 0xf8;
      pbVar2 = pbVar2 + 3;
      do {
        puVar3 = puVar3 + 1;
        iVar4 = iVar4 - param_2;
      } while (-1 < iVar4);
      iVar4 = iVar4 + param_4;
      param_3 = (ushort *)((int)param_3 + -1);
    } while (param_3 != (ushort *)0x0);
  }
  return;
}


