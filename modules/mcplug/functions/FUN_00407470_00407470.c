/* Module: mcplug.dll
   Function: FUN_00407470
   Address: 00407470
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_00407470(void *this,int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
            int param_6)

{
  int iVar1;
  int *piVar2;
  int *unaff_EDI;
  int *piVar3;
  int *local_c [2];
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x424) + 0x3e);
  local_c[0] = this;
  if (piVar2 == (int *)0x0) {
    piVar3 = *(int **)((int)this + 0x18);
    local_c[0] = piVar2;
    iVar1 = (**(code **)*piVar3)(piVar3,&DAT_00475cd0,local_c);
    if (iVar1 < 0) {
      return iVar1;
    }
    piVar2 = (int *)(**(code **)(*unaff_EDI + 0x20))(unaff_EDI,0x42,0x410);
    if (piVar2 == (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
      return -0x7ff8fff2;
    }
    *(int **)(*(int *)(param_1 + 0x424) + 0x3e) = piVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x424) + 0x3a) = 0x410;
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  piVar3 = piVar2;
  for (iVar1 = 0x104; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  mpegOutAudioDefaults(piVar2,param_2);
  switch(param_2) {
  case 0:
  case 2:
    piVar2[0x101] = 0xf;
    break;
  case 1:
  case 3:
    piVar2[0x101] = 0x1f;
    break;
  case 4:
    piVar2[0x101] = 0x1f;
    piVar2[0x100] = 48000;
    goto LAB_0040752f;
  }
  piVar2[0x100] = 0xac44;
LAB_0040752f:
  mpegOutVideoDefaults(piVar2 + 0x24,param_2,param_3);
  if (param_4 != 0) {
    *(undefined4 *)((int)piVar2 + 0x3f5) = *(undefined4 *)(**(int **)(param_1 + 0x428) + 4);
    *(undefined4 *)((int)piVar2 + 0x3f9) = *(undefined4 *)(**(int **)(param_1 + 0x428) + 8);
  }
  mpegOutVideoPerformance(piVar2 + 0x24,0,piVar2[0x101],0);
  mpegOutMuxDefaults(piVar2 + 9,param_2);
  switch(param_2) {
  case 0:
    *(undefined4 *)((int)piVar2 + 0x3c5) = 0;
    *(undefined4 *)((int)piVar2 + 0x3c9) = 0x412e8480;
    break;
  case 1:
    *(undefined4 *)((int)piVar2 + 0x3c5) = 0;
    *(undefined4 *)((int)piVar2 + 0x3c9) = 0x41318c30;
    break;
  case 2:
    *(undefined4 *)((int)piVar2 + 0x3c5) = 0;
    *(undefined4 *)((int)piVar2 + 0x3c9) = 0x414e8480;
    break;
  case 4:
    piVar2[0x18] = 0;
  case 3:
    *(undefined4 *)((int)piVar2 + 0x3cd) = 0;
    goto LAB_00407618;
  default:
    goto switchD_00407596_default;
  }
  *(undefined4 *)((int)piVar2 + 0x3cd) = 0;
LAB_00407618:
  *(undefined4 *)((int)piVar2 + 0x3d1) = 0x41077000;
switchD_00407596_default:
  piVar2[0x102] = param_5;
  piVar2[0x103] = param_6;
  FUN_00415290((int)piVar2,*(undefined4 **)(param_1 + 0x428));
  FUN_00415210(piVar2,*(undefined4 **)(param_1 + 0x424));
  return 0;
}


