/* Module: encn3260.dll
   Function: FUN_664b9100
   Address: 664b9100
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_664b9100(int param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_68;
  undefined4 local_64;
  
  iVar2 = 0;
  uVar3 = 0x1000000;
  uVar1 = *(uint *)(param_1 + 0x448);
  if ((uVar1 & 0x20) == 0) {
    if ((uVar1 & 0x40) != 0) {
      uVar3 = 0x1002000;
    }
    local_68 = 100;
    local_64 = 8;
    iVar2 = (**(code **)(**(int **)(param_1 + 0x8b0) + 0x14))
                      (*(int **)(param_1 + 0x8b0),param_3,*(undefined4 *)(param_1 + 0x8b4),param_2,
                       uVar3,&local_68);
  }
  else if (((((((uVar1 & 0x100) == 0) || (*(int *)(param_1 + 0x45c) != param_2[2])) ||
             (*(int *)(param_1 + 0x454) != *param_2)) ||
            ((*(int *)(param_1 + 0x460) != param_2[3] || (*(int *)(param_1 + 0x458) != param_2[1])))
            ) || ((*(int *)(param_1 + 0x46c) != param_3[2] ||
                  ((*(int *)(param_1 + 0x464) != *param_3 ||
                   (*(int *)(param_1 + 0x470) != param_3[3])))))) ||
          (*(int *)(param_1 + 0x468) != param_3[1])) {
    uVar3 = 0x4000;
    if ((uVar1 & 0x40) != 0) {
      uVar3 = 0x4400;
    }
    iVar2 = (**(code **)(**(int **)(param_1 + 0x8b4) + 0x84))
                      (*(int **)(param_1 + 0x8b4),param_2,*(undefined4 *)(param_1 + 0x8b0),param_3,
                       uVar3,0);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x8ac) + 0x58))(*(int **)(param_1 + 0x8ac),4,0);
    }
    *(int *)(param_1 + 0x45c) = param_2[2];
    *(int *)(param_1 + 0x454) = *param_2;
    *(int *)(param_1 + 0x460) = param_2[3];
    *(int *)(param_1 + 0x458) = param_2[1];
    *(int *)(param_1 + 0x46c) = param_3[2];
    *(int *)(param_1 + 0x464) = *param_3;
    *(int *)(param_1 + 0x470) = param_3[3];
    *(int *)(param_1 + 0x468) = param_3[1];
    return iVar2;
  }
  return iVar2;
}


