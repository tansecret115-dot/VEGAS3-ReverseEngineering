/* Module: encn3260.dll
   Function: FUN_664c5800
   Address: 664c5800
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_664c5800(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  int *piVar4;
  int *piVar5;
  UINT_PTR UVar6;
  uint local_1c;
  int *local_18;
  int *local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  UVar6 = 0;
  local_8 = (int *)*param_1;
  local_1c = 0;
  local_18 = (int *)0x0;
  local_14 = (int *)0x0;
  local_10 = 0;
  local_c = 0;
  piVar5 = (int *)0x0;
  uVar1 = GetTickCount();
  do {
    iVar2 = (**(code **)(*local_8 + 0x28))(&local_1c,0,0);
    if (iVar2 != 0) break;
    if (local_1c < 0x465) {
      if (local_1c == 0x464) {
        FUN_664c56c0(param_1,(uint)local_18,local_14);
      }
      else {
        if (local_1c != 0x113) goto switchD_664c58ae_caseD_46d;
        DVar3 = GetTickCount();
        if (DVar3 < uVar1) {
          piVar4 = (int *)((DVar3 - uVar1) - 1);
        }
        else {
          piVar4 = (int *)(DVar3 - uVar1);
        }
        if (piVar5 <= piVar4) {
          FUN_664c5710(param_1,(int *)0x0);
          uVar1 = DVar3;
        }
      }
    }
    else {
      switch(local_1c) {
      case 0x469:
        FUN_664c5630(param_1,local_18);
        break;
      case 0x46a:
        FUN_664c5710(param_1,local_18);
        break;
      case 0x46b:
        if (UVar6 != 0) {
          FUN_664bc0a0(UVar6);
        }
        piVar5 = local_18;
        UVar6 = FUN_664bc080((UINT)local_18);
        break;
      case 0x46c:
        if (UVar6 != 0) {
          FUN_664bc0a0(UVar6);
          UVar6 = 0;
          piVar5 = (int *)0x0;
        }
        break;
      default:
switchD_664c58ae_caseD_46d:
        (**(code **)(*local_8 + 0x2c))(&local_1c);
        break;
      case 0x4c8:
        local_c = 1;
      }
    }
  } while (local_c == 0);
  if (UVar6 != 0) {
    FUN_664bc0a0(UVar6);
  }
  (**(code **)(*(int *)param_1[4] + 4))();
  return 0;
}


