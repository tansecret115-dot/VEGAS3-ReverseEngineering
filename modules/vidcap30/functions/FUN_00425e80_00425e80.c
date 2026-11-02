/* Module: vidcap30.exe
   Function: FUN_00425e80
   Address: 00425e80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00425e80(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *unaff_EDI;
  wchar_t *pwVar5;
  
  piVar2 = param_1;
  if (*param_1 != 8) {
    return 0;
  }
  if (param_2 != 0) {
    param_1[0x52] = param_1[0x52] | 0x200000;
    param_1[0x53] = param_1[0x53];
    FUN_00425230(param_1,1);
    if ((piVar2[0x52] & 0x800000U) == 0) {
      return 0;
    }
    iVar3 = FUN_004261d0(piVar2,1);
    return iVar3;
  }
  pwVar5 = L"Video Renderer";
  iVar3 = (**(code **)(*(int *)param_1[0xd4] + 0x18))
                    ((int *)param_1[0xd4],L"Video Renderer",&param_1);
  if (iVar3 < 0) {
    return iVar3;
  }
  if ((piVar2[0x52] & 0x2000000U) == 0) {
    iVar3 = (**(code **)(*unaff_EDI + 0x14))(unaff_EDI);
    if (iVar3 < 0) goto LAB_00425fd3;
    piVar2[0x52] = piVar2[0x52] & 0xffdfffff;
    piVar2[0x53] = piVar2[0x53];
    FUN_00425230(piVar2,0);
    iVar4 = FUN_00426150(piVar2);
  }
  else {
    if (piVar2[0xd7] != 0) {
      FUN_00425230(piVar2,0);
      (**(code **)(*(int *)piVar2[0xd7] + 0x74))((int *)piVar2[0xd7],0);
      piVar1 = (int *)piVar2[0xd7];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      piVar2[0xd7] = 0;
    }
    iVar3 = (**(code **)(*(int *)piVar2[0xd4] + 0x10))((int *)piVar2[0xd4],unaff_EDI);
    if (iVar3 < 0) goto LAB_00425fd3;
    piVar2[0x52] = piVar2[0x52] & 0xffdfffff;
    piVar2[0x53] = piVar2[0x53];
    iVar4 = FUN_00426150(piVar2);
  }
  if (iVar4 != 0) {
    iVar3 = FUN_004261d0(piVar2,0);
  }
LAB_00425fd3:
  if (pwVar5 != (wchar_t *)0x0) {
    (**(code **)(*(int *)pwVar5 + 8))(pwVar5);
  }
  return iVar3;
}


