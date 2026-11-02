/* Module: encn3260.dll
   Function: FUN_664a0590
   Address: 664a0590
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_664a0590(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = param_1;
  if (param_1[0xc] != 0) {
    return -0x7ffbfff7;
  }
  (*(code *)**(undefined4 **)param_1[0x14])((undefined4 *)param_1[0x14],&DAT_664dcdc0,&param_1);
  piVar2 = param_2;
  iVar3 = (**(code **)(*param_2 + 0xc))(param_2,param_1);
  (**(code **)(*param_1 + 8))(param_1);
  if (iVar3 == 0) {
    piVar1[0xc] = (int)piVar2;
    (**(code **)(*piVar2 + 4))(piVar2);
    if ((*(byte *)(piVar1 + 0x17) & 1) != 0) {
      local_18 = *(undefined4 *)((int)piVar1 + 0x10d);
      *(byte *)(piVar1 + 0x17) = *(byte *)(piVar1 + 0x17) & 0xfe | 2;
      local_1c = 0x4001;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      local_8 = 0;
      (**(code **)(*(int *)piVar1[0xc] + 0x14))((int *)piVar1[0xc],&local_1c);
    }
  }
  return iVar3;
}


