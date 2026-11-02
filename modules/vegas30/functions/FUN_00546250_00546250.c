/* Module: vegas30.exe
   Function: FUN_00546250
   Address: 00546250
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_00546250(int param_1,int *param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 *param_6,int param_7)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  int *piVar5;
  undefined1 local_8 [8];
  
  *param_6 = 0;
  param_6[1] = 0x3ff00000;
  *param_3 = 0;
  piVar5 = (int *)(-(uint)(DAT_0064aec8 != 0) & 8);
  if (param_7 != 0) {
    uVar2 = FUN_005627f0(param_7);
    iVar3 = (**(code **)(**(int **)(param_1 + 0x1f8) + 0x3c))
                      (*(int **)(param_1 + 0x1f8),param_4,param_5,param_2 + 0x10b,param_2 + 0x10c,
                       param_2,0,local_8,(uint)piVar5 | 2,uVar2);
    if (iVar3 == 0) {
      if (param_2[0x10c] == 0) {
        return 0;
      }
      param_2[0x10d] = param_2[0x10d] | 4;
      return 0;
    }
  }
  piVar1 = param_2 + 0x10b;
  param_7 = 0;
  iVar3 = (**(code **)(**(int **)(param_1 + 0x1f8) + 0x3c))
                    (*(int **)(param_1 + 0x1f8),param_4,param_5,piVar1,param_2 + 0x10c,param_2,
                     &param_7,local_8,piVar5,0);
  if (iVar3 != 0) {
    return iVar3;
  }
  iVar4 = _SfGetPixelType_4(*param_2);
  iVar3 = param_2[0x10c];
  if (iVar3 < 0) {
    _SfDibCopy_36(*(undefined4 *)(param_1 + 0xc0),0,0,0,*param_2,
                  *piVar1 - (*(int *)(*param_2 + 8) + -1) * iVar3,0,iVar3,3);
    *piVar5 = *piVar1;
    *piVar1 = 0;
    param_2[0x10c] = 0;
  }
  else {
    if ((0x16 < iVar4) && (iVar4 < 0x1d)) goto LAB_005463b2;
    _SfDibCopy_36(*(undefined4 *)(param_1 + 0xc0),0,0,0,*param_2,*piVar1,0,iVar3,3);
    *piVar5 = *piVar1;
    *piVar1 = 0;
  }
  *param_2 = *(int *)(param_1 + 0xc0);
LAB_005463b2:
  if (unaff_EBP != 0) {
    *unaff_ESI = *(undefined4 *)(unaff_EBP + 0x18);
    unaff_ESI[1] = *(undefined4 *)(unaff_EBP + 0x1c);
  }
  return 0;
}


