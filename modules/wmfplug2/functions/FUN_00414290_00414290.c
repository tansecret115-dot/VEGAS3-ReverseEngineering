/* Module: wmfplug2.dll
   Function: FUN_00414290
   Address: 00414290
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00414290(int param_1,int *param_2,ushort param_3,int param_4,undefined4 *param_5,int param_6
                )

{
  undefined4 *puVar1;
  ushort uVar2;
  int iVar3;
  int *unaff_EBX;
  uint uVar4;
  undefined4 *unaff_retaddr;
  undefined4 local_4;
  
  uVar2 = param_3;
  if (((param_6 == 0) || (10 < param_3)) || ((param_3 != 0 && (param_4 == 0)))) {
    return -0x7ff8ffa9;
  }
  local_4 = 0;
  _param_3 = 0;
  iVar3 = WMCreateProfileManager(&local_4);
  if (((-1 < iVar3) &&
      (iVar3 = (**(code **)(*unaff_EBX + 0xc))(unaff_EBX,0x70000,&param_2), -1 < iVar3)) &&
     (iVar3 = (**(code **)(*param_2 + 0x14))(param_2,L"Custom Profile"), -1 < iVar3)) {
    if ((unaff_retaddr == (undefined4 *)0x0) ||
       (iVar3 = FUN_004150c0(unaff_retaddr[1],(byte)*unaff_retaddr,(int *)unaff_retaddr[2],
                             unaff_retaddr[3],(uint)(uVar2 != 0),param_2,unaff_EBX), -1 < iVar3)) {
LAB_00414387:
      if (uVar2 != 0) {
        uVar4 = 0;
        if (uVar2 != 0) {
          do {
            if (iVar3 < 0) goto LAB_00414443;
            puVar1 = (undefined4 *)(_param_3 + (uVar4 & 0xffff) * 0x24);
            iVar3 = FUN_00415560((int)param_2,unaff_EBX,uVar4 + 2,*puVar1,puVar1[1],puVar1[4],
                                 puVar1[5],puVar1[6],
                                 *(int *)(_param_3 + 0x1c + (uVar4 & 0xffff) * 0x24));
            uVar4 = uVar4 + 1;
          } while ((ushort)uVar4 < uVar2);
        }
        if ((iVar3 < 0) || ((1 < uVar2 && (iVar3 = FUN_004158f0(param_2), iVar3 < 0))))
        goto LAB_00414443;
      }
      if (param_1 != 0) {
        iVar3 = FUN_00415980(param_2);
        if (-1 < iVar3) {
          *param_5 = param_2;
          goto LAB_00414459;
        }
        goto LAB_00414443;
      }
    }
    else if (uVar2 != 0) {
      iVar3 = FUN_004150c0(unaff_retaddr[1],(byte)*unaff_retaddr,(int *)unaff_retaddr[2],
                           unaff_retaddr[3],0,param_2,unaff_EBX);
      if (iVar3 < 0) goto LAB_00414443;
      goto LAB_00414387;
    }
    if (-1 < iVar3) {
      *param_5 = param_2;
      goto LAB_00414459;
    }
  }
LAB_00414443:
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
    param_2 = (int *)0x0;
  }
LAB_00414459:
  if (unaff_EBX != (int *)0x0) {
    (**(code **)(*unaff_EBX + 8))(unaff_EBX);
  }
  return iVar3;
}


