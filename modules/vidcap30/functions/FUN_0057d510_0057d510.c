/* Module: vidcap30.exe
   Function: FUN_0057d510
   Address: 0057d510
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_0057d510(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 *param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00584663;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0057b480(param_2,0);
  *(undefined4 *)(param_1 + 0x1c) = param_7;
  local_4 = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = param_4;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 1;
  FUN_0057ad30();
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x90) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 *)(param_1 + 0x94) = 0x3ff00000;
  if (param_6 != (undefined4 *)0x0) {
    iVar1 = FUN_00582c10(param_6);
    uVar4 = (iVar1 + 1U) * 2;
    puVar2 = (undefined4 *)FUN_00404b00(uVar4);
    *(undefined4 **)(param_1 + 0x14) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      for (uVar3 = (iVar1 + 1U & 0x7fffffff) >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar2 = *param_6;
        param_6 = param_6 + 1;
        puVar2 = puVar2 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)param_6;
        param_6 = (undefined4 *)((int)param_6 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
    }
  }
  ExceptionList = local_c;
  return param_1;
}


