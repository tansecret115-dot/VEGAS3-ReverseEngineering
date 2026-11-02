/* Module: erv23260.dll
   Function: FUN_637ffdb0
   Address: 637ffdb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_637ffdb0(void *this,uint param_1)

{
  int iVar1;
  uint *puVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = *(int *)((int)this + 0x18);
  if (*(int *)((int)this + 0x30) == 0x50333632) {
    uVar5 = *(uint *)((int)this + 0x20);
    uVar4 = 0;
    if (uVar5 != 0) {
      puVar2 = (uint *)(iVar1 + 4);
      while( true ) {
        uVar6 = *(int *)((int)this + 0x34) << 3;
        if (uVar4 < uVar5 - 1) {
          uVar6 = puVar2[2];
        }
        if (((param_1 < uVar6) && ((puVar2[-1] & 1) == 0)) && (param_1 < *puVar2)) break;
        uVar4 = uVar4 + 1;
        puVar2 = puVar2 + 2;
        if (uVar5 <= uVar4) {
          return 0;
        }
      }
      *(uint *)((int)this + 0x14) = iVar1 + uVar4 * 8;
      return 1;
    }
  }
  else {
    uVar5 = 0;
    if (*(uint *)((int)this + 0x20) != 0) {
      pcVar3 = (char *)(iVar1 + 8);
      while (((((pcVar3[-8] & 1U) != 0 || (*(uint *)(pcVar3 + -4) <= param_1)) || (*pcVar3 != '\0'))
             || (pcVar3[2] != '\0'))) {
        uVar5 = uVar5 + 1;
        pcVar3 = pcVar3 + 0x10;
        if (*(uint *)((int)this + 0x20) <= uVar5) {
          return 0;
        }
      }
      *(uint *)((int)this + 0x14) = uVar5 * 0x10 + *(int *)((int)this + 0x18);
      return 1;
    }
  }
  return 0;
}


