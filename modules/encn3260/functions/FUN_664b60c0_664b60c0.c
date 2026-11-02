/* Module: encn3260.dll
   Function: FUN_664b60c0
   Address: 664b60c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_664b60c0(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  
  if ((((param_1 != (uint *)0x0) && (param_2 != (uint *)0x0)) && (param_1[1] != 0)) &&
     (((*param_1 & 0x100) != 0 && ((*param_2 & 0x100) != 0)))) {
    if ((*param_2 & 1) == 0) {
      uVar1 = param_2[1];
      if (-1 < (int)uVar1) {
        puVar4 = param_2 + uVar1 + 0x10e;
        iVar3 = uVar1 + 1;
        do {
          if ((void *)*puVar4 != (void *)0x0) {
            FUN_664b5ef0((void *)*puVar4);
            *puVar4 = 0;
          }
          puVar4 = puVar4 + -1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    else {
      (**(code **)(*(int *)param_2[0x10e] + 8))((int *)param_2[0x10e]);
      param_2[0x10e] = 0;
    }
    *param_2 = 0;
    uVar2 = (**(code **)(*(int *)param_1[0x218] + 0x18))(param_2,0);
    (**(code **)(*(int *)param_1[0x218] + 0xc))(uVar2);
    return 0;
  }
  return 0x80070057;
}


