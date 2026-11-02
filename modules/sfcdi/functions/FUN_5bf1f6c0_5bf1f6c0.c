/* Module: sfcdi.dll
   Function: FUN_5bf1f6c0
   Address: 5bf1f6c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5bf1f6c0(void *this,int *param_1)

{
  HSFBURN__ **ppHVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_2c [5];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  local_38 = 0;
  local_34 = 0;
  local_40 = 0;
  if (param_1 == (int *)0x0) {
    return -0x7ff8ffa9;
  }
  iVar2 = FUN_5bf1f260(*(HSFCD__ **)((int)this + 0x1de4),(uint)(*(int *)((int)this + 0x1e58) != 3),0
                      );
  if (-1 < iVar2) {
    if ((-1 < *(int *)((int)this + 0x1e58)) && (*(int *)((int)this + 0x1e58) < 2)) {
      local_38 = *(undefined4 *)(*(int *)((int)this + 0x1e5c) + 8);
      local_34 = *(undefined4 *)(*(int *)((int)this + 0x1e5c) + 0xc);
      local_40 = (int)this + 0x54;
    }
    uVar3 = FUN_5bf2bb90(local_40);
    local_3c = 0;
    if (uVar3 != 0) {
      do {
        if (iVar2 < 0) {
          return iVar2;
        }
        local_2c[3] = FUN_5bf2bbb0(local_40,local_3c);
        if (local_2c[3] == 0) {
          return -0x7ffb1f32;
        }
        puVar4 = local_2c;
        for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        local_2c[1] = *(undefined4 *)((int)this + 0x1de4);
        local_14 = local_34;
        local_10 = *(undefined4 *)((int)this + 0x1e50);
        local_2c[2] = 0;
        local_18 = local_38;
        local_8 = 0;
        local_4 = 0;
        if (*(int *)((int)this + 0x1e58) == 0) {
          local_2c[0] = local_2c[0] | 0x42;
        }
        else if (*(int *)((int)this + 0x1e58) == 1) {
          local_2c[0] = local_2c[0] | 0x140;
        }
        if (*(int *)((int)this + 0x1e54) != 0) {
          local_2c[0] = local_2c[0] | 0x20;
        }
        ppHVar1 = (HSFBURN__ **)((int)this + 0x3d18);
        iVar2 = SfCDBurn_Create(ppHVar1,(burncreatetag *)local_2c);
        if (iVar2 == 0) {
          iVar2 = SfCDBurn_WriteDiscNG(*ppHVar1);
        }
        if (-1 < iVar2) {
          iVar2 = FUN_5bf1f8a0(this,param_1);
        }
        SfCDBurn_Destroy(*ppHVar1);
        local_3c = local_3c + 1;
        *ppHVar1 = (HSFBURN__ *)0x0;
      } while (local_3c < uVar3);
    }
    if (-1 < iVar2) {
      iVar2 = FUN_5bf1fa50(this,param_1);
    }
  }
  return iVar2;
}


