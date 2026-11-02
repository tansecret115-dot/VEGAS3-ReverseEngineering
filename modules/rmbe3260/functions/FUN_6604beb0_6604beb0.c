/* Module: rmbe3260.dll
   Function: FUN_6604beb0
   Address: 6604beb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_6604beb0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3,undefined2 *param_4,
            undefined4 *param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if ((param_2 & 0xffff) != *(uint *)((int)this + 0xc)) {
    return 0x80040fc0;
  }
  *param_4 = (short)param_2;
  puVar2 = param_3;
  for (uVar1 = (param_2 & 0xffff) >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  FUN_6604d000(param_3,param_5);
  return 0;
}


