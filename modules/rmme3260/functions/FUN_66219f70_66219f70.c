/* Module: rmme3260.dll
   Function: FUN_66219f70
   Address: 66219f70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66219f70(void *this,int *param_1)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *local_10;
  int local_c;
  undefined4 local_8;
  
  puVar4 = (undefined1 *)0x0;
  local_8 = 0;
  local_10 = (undefined1 *)0x0;
  if (*(int *)((int)this + 0x30) != 0) {
    local_c = **(int **)((int)this + 0x18);
    local_10 = operator_new(0x14);
    puVar4 = operator_new(0xe);
    *local_10 = (char)((uint)*(undefined4 *)((int)this + 4) >> 0x18);
    local_10[1] = (char)((uint)*(undefined4 *)((int)this + 4) >> 0x10);
    local_10[2] = (char)((uint)*(undefined4 *)((int)this + 4) >> 8);
    local_10[3] = *(undefined1 *)((int)this + 4);
    local_10[4] = (char)((uint)*(undefined4 *)((int)this + 8) >> 0x18);
    local_10[5] = (char)((uint)*(undefined4 *)((int)this + 8) >> 0x10);
    local_10[6] = (char)((uint)*(undefined4 *)((int)this + 8) >> 8);
    local_10[7] = *(undefined1 *)((int)this + 8);
    local_10[8] = *(undefined1 *)((int)this + 0xd);
    local_10[9] = *(undefined1 *)((int)this + 0xc);
    if (*(short *)((int)this + 0xc) == 0) {
      local_10[10] = (char)((uint)*(undefined4 *)((int)this + 0xe) >> 0x18);
      local_10[0xb] = (char)((uint)*(undefined4 *)((int)this + 0xe) >> 0x10);
      local_10[0xc] = (char)((uint)*(undefined4 *)((int)this + 0xe) >> 8);
      local_10[0xd] = *(undefined1 *)((int)this + 0xe);
      local_10[0xe] = *(undefined1 *)((int)this + 0x13);
      local_10[0xf] = *(undefined1 *)((int)this + 0x12);
      local_10[0x10] = (char)((uint)*(undefined4 *)((int)this + 0x14) >> 0x18);
      local_10[0x11] = (char)((uint)*(undefined4 *)((int)this + 0x14) >> 0x10);
      local_10[0x12] = (char)((uint)*(undefined4 *)((int)this + 0x14) >> 8);
      local_10[0x13] = *(undefined1 *)((int)this + 0x14);
    }
    iVar2 = (**(code **)(*param_1 + 0x30))(local_10,0x14);
    if (iVar2 == 0x14) {
      uVar3 = 0;
      if (*(int *)((int)this + 0x30) != 0) {
        do {
          if ((uVar3 & 0x3f) == 0) {
            local_c = *(int *)(*(int *)((int)this + 0x18) + (uVar3 >> 6) * 4);
          }
          psVar1 = (short *)(local_c + (uVar3 & 0x3f) * 0xe);
          *puVar4 = *(undefined1 *)((int)psVar1 + 1);
          puVar4[1] = (char)*psVar1;
          if (*psVar1 == 0) {
            puVar4[2] = (char)((uint)*(undefined4 *)(psVar1 + 1) >> 0x18);
            puVar4[3] = (char)((uint)*(undefined4 *)(psVar1 + 1) >> 0x10);
            puVar4[4] = (char)((uint)*(undefined4 *)(psVar1 + 1) >> 8);
            puVar4[5] = (char)psVar1[1];
            puVar4[6] = (char)((uint)*(undefined4 *)(psVar1 + 3) >> 0x18);
            puVar4[7] = (char)((uint)*(undefined4 *)(psVar1 + 3) >> 0x10);
            puVar4[8] = (char)((uint)*(undefined4 *)(psVar1 + 3) >> 8);
            puVar4[9] = (char)psVar1[3];
            puVar4[10] = (char)((uint)*(undefined4 *)(psVar1 + 5) >> 0x18);
            puVar4[0xb] = (char)((uint)*(undefined4 *)(psVar1 + 5) >> 0x10);
            puVar4[0xc] = (char)((uint)*(undefined4 *)(psVar1 + 5) >> 8);
            puVar4[0xd] = (char)psVar1[5];
          }
          iVar2 = (**(code **)(*param_1 + 0x30))(puVar4,0xe);
          if (iVar2 != 0xe) goto LAB_6621a134;
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)((int)this + 0x30));
      }
    }
    else {
LAB_6621a134:
      local_8 = (**(code **)(*param_1 + 4))();
    }
  }
  if (local_10 != (undefined1 *)0x0) {
    operator_delete(local_10);
  }
  if (puVar4 != (undefined1 *)0x0) {
    operator_delete(puVar4);
  }
  return local_8;
}


