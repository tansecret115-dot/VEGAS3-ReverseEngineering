/* Module: mpgmux.dll
   Function: FUN_1000c280
   Address: 1000c280
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000c280(int param_1,uint param_2,uint param_3,char param_4,int *param_5)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  if (*(int *)(param_1 + 0x2c) < 2) {
    uVar6 = __alldiv(param_2 + 2,param_3 + (0xfffffffd < param_2),300,0);
    bVar2 = (byte)((ulonglong)uVar6 >> 0x18);
    cVar3 = (char)uVar6;
    uVar4 = (uint)uVar6;
  }
  else {
    uVar6 = __alldiv(param_2,param_3,300,0);
    uVar4 = (uint)uVar6;
    param_3._0_1_ = (char)((ulonglong)uVar6 >> 0x20);
    uVar5 = param_2 + uVar4 * -300;
    bVar2 = (byte)((ulonglong)uVar6 >> 0x18);
    cVar3 = (char)uVar6;
    if (param_4 == '\x01') {
      *(byte *)*param_5 = bVar2 >> 3 & 0x18 | bVar2 >> 4 & 3 | (char)param_3 << 5 | 0x44;
      iVar1 = *param_5;
      *param_5 = iVar1 + 1;
      *(char *)(iVar1 + 1) = (char)(uVar4 >> 0x14);
      iVar1 = *param_5;
      *param_5 = iVar1 + 1;
      *(byte *)(iVar1 + 1) = (byte)(uVar4 >> 0xc) & 0xfc | (byte)(uVar4 >> 0xd) & 3 | 4;
      iVar1 = *param_5;
      *param_5 = iVar1 + 1;
      *(char *)(iVar1 + 1) = (char)(uVar4 >> 5);
      iVar1 = *param_5;
      *param_5 = iVar1 + 1;
      *(byte *)(iVar1 + 1) = (byte)(uVar5 >> 7) & 3 | cVar3 << 3 | 4;
      iVar1 = *param_5;
      *param_5 = iVar1 + 1;
      *(byte *)(iVar1 + 1) = (char)uVar5 << 1 | 1;
      *param_5 = *param_5 + 1;
      return;
    }
    if (param_4 == '\x04') {
      param_4 = '\x01';
    }
  }
  *(byte *)*param_5 = (param_4 << 1 | (byte)((ulonglong)uVar6 >> 0x20)) << 3 | bVar2 >> 5 & 6 | 1;
  iVar1 = *param_5;
  *param_5 = iVar1 + 1;
  *(char *)(iVar1 + 1) = (char)(uVar4 >> 0x16);
  iVar1 = *param_5;
  *param_5 = iVar1 + 1;
  *(byte *)(iVar1 + 1) = (byte)(uVar4 >> 0xe) | 1;
  iVar1 = *param_5;
  *param_5 = iVar1 + 1;
  *(char *)(iVar1 + 1) = (char)(uVar4 >> 7);
  iVar1 = *param_5;
  *param_5 = iVar1 + 1;
  *(byte *)(iVar1 + 1) = cVar3 << 1 | 1;
  *param_5 = *param_5 + 1;
  return;
}


