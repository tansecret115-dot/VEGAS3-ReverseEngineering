/* Module: rmto3260.dll
   Function: FUN_662f7bd0
   Address: 662f7bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662f7bd0(void *this,undefined4 *param_1,uint *param_2,undefined4 *param_3)

{
  short sVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  if (*(int *)((int)this + 0x52) == 0) {
    return 0x80040007;
  }
  if (*(int *)((int)this + 0x34) == 0) {
    *param_2 = 0;
    return 0;
  }
  if (*(short *)((int)this + 0x49f) != -1) {
    sVar1 = *(short *)((int)this + 0x49f);
    uVar3 = (**(code **)(**(int **)((int)this + 4) + 0xac))();
    if (sVar1 != (short)(*(uint *)((int)this + 0x46f) / (uint)uVar3)) {
      if (*(int *)((int)this + 0x5e) == 0) {
        return 0;
      }
      if (sVar1 == -1) {
        return 0;
      }
      piVar2 = *(int **)((int)this + 4);
      uVar3 = (**(code **)(*piVar2 + 0xac))();
      uVar4 = (**(code **)(*piVar2 + 0xac))();
      puVar6 = (undefined4 *)
               ((uint)uVar4 * (int)*(short *)((int)this + 0x49f) + *(int *)((int)this + 0x47f));
      for (uVar5 = (uint)(uVar3 >> 2); uVar5 != 0; uVar5 = uVar5 - 1) {
        *param_1 = *puVar6;
        puVar6 = puVar6 + 1;
        param_1 = param_1 + 1;
      }
      for (uVar5 = uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)param_1 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        param_1 = (undefined4 *)((int)param_1 + 1);
      }
      uVar5 = (**(code **)(**(int **)((int)this + 4) + 0xac))();
      *param_2 = uVar5 & 0xffff;
      *param_3 = *(undefined4 *)((int)this + 0x48f);
      param_3[1] = *(undefined4 *)((int)this + 0x493);
      *(short *)((int)this + 0x49f) = *(short *)((int)this + 0x49f) + 1;
      return 0;
    }
  }
  *param_2 = 0;
  *(undefined2 *)((int)this + 0x49f) = 0xffff;
  return 0;
}


