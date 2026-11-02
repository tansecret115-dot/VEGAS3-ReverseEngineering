/* Module: tokr3260.dll
   Function: FUN_68058ad0
   Address: 68058ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_68058ad0(int param_1,int param_2,int *param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  
  *param_4 = 0;
  iVar1 = *param_3;
  pbVar4 = (byte *)((iVar1 >> 3) + param_2);
  bVar3 = (byte)(iVar1 >> 0x1f);
  bVar3 = 0x80 >> ((((byte)iVar1 ^ bVar3) - bVar3 & 7 ^ bVar3) - bVar3 & 0x1f);
  *param_3 = param_1 + iVar1;
  if (0 < param_1) {
    do {
      uVar2 = *param_4;
      *param_4 = uVar2 << 1;
      if ((*pbVar4 & bVar3) != 0) {
        *param_4 = uVar2 << 1 | 1;
      }
      bVar3 = bVar3 >> 1;
      if (bVar3 == 0) {
        bVar3 = 0x80;
        pbVar4 = pbVar4 + 1;
      }
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}


