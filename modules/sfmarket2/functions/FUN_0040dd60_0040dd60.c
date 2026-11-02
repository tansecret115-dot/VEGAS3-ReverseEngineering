/* Module: sfmarket2.dll
   Function: FUN_0040dd60
   Address: 0040dd60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0040dd60(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *unaff_EBX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = *(undefined4 *)(param_1 + 0x10b8);
  puVar6 = (undefined4 *)0x1;
  local_4 = 0;
  iVar1 = Ordinal_15(0x11,1,&local_8);
  if (iVar1 != 0) {
    iVar2 = Ordinal_23(iVar1,&stack0xffffffe8);
    if (-1 < iVar2) {
      uVar4 = *(uint *)(param_1 + 0x10b8);
      puVar5 = *(undefined4 **)(param_1 + 0x10b4);
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      Ordinal_24(iVar1);
    }
    *unaff_EBX = 0x2000;
    *(int *)(unaff_EBX + 4) = iVar1;
    return iVar2;
  }
  return -0x7ff8fff2;
}


