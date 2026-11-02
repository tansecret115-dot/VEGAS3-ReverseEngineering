/* Module: rmbe3260.dll
   Function: FUN_6605b350
   Address: 6605b350
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_6605b350(void *this,undefined4 *param_1,uint param_2,uint param_3,uint *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar1 = 0x80070057;
  if (param_2 < *(uint *)this) {
    uVar2 = *(uint *)this - param_2;
    if (uVar2 < param_3) {
      *param_4 = uVar2;
    }
    else {
      *param_4 = param_3;
    }
    uVar2 = *param_4;
    puVar4 = (undefined4 *)(*(int *)((int)this + 0x10) + param_2);
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *param_1 = *puVar4;
      puVar4 = puVar4 + 1;
      param_1 = param_1 + 1;
    }
    uVar1 = 0;
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)param_1 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      param_1 = (undefined4 *)((int)param_1 + 1);
    }
  }
  return uVar1;
}


