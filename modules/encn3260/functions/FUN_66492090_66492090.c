/* Module: encn3260.dll
   Function: FUN_66492090
   Address: 66492090
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66492090(void *this,int *param_1)

{
  ushort uVar1;
  DWORD DVar2;
  int iVar3;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  uint local_c;
  uint local_8;
  
  iVar3 = 0;
  (**(code **)(*param_1 + 4))(param_1);
  local_8 = (**(code **)(*param_1 + 0x1c))(param_1);
  local_c = (**(code **)(*param_1 + 0x18))(param_1);
  DVar2 = 0;
  while ((local_c != 0 && (iVar3 == 0))) {
    uVar1 = CONCAT11(*(undefined1 *)(local_8 + 1),*(undefined1 *)(local_8 + 2));
    if (uVar1 < 0xff00) {
      if (*(int *)((int)this + 0x5c) == 0) {
        if (DVar2 == 0) {
          iVar3 = (**(code **)*param_1)(param_1,&DAT_664dd9d0,&local_14);
          if (iVar3 == 0) {
            DVar2 = (**(code **)(*local_14 + 0xc))(local_14);
            (**(code **)(*local_14 + 8))(local_14);
          }
          else {
            DVar2 = GetTickCount();
          }
        }
        iVar3 = FUN_66492340(this,&local_8,&local_c,DVar2);
      }
      else {
        if (DVar2 == 0) {
          iVar3 = (**(code **)*param_1)(param_1,&DAT_664dd9d0,&local_10);
          if (iVar3 == 0) {
            DVar2 = (**(code **)(*local_10 + 0xc))(local_10);
            (**(code **)(*local_10 + 8))(local_10);
          }
          else {
            DVar2 = GetTickCount();
          }
        }
        iVar3 = FUN_66492740(this,&local_8,&local_c,DVar2);
      }
    }
    else {
      switch(uVar1) {
      case 0xff00:
        iVar3 = FUN_66492b90(&local_8,&local_c);
        break;
      case 0xff01:
        if (DVar2 == 0) {
          iVar3 = (**(code **)*param_1)(param_1,&DAT_664dd9d0,&local_18);
          if (iVar3 == 0) {
            DVar2 = (**(code **)(*local_18 + 0xc))(local_18);
            (**(code **)(*local_18 + 8))(local_18);
          }
          else {
            DVar2 = GetTickCount();
          }
        }
        iVar3 = FUN_66492ad0();
        break;
      case 0xff02:
        iVar3 = FUN_66492c10(this,&local_8,&local_c);
        break;
      case 0xff03:
        iVar3 = FUN_66492ec0(this,(int *)&local_8,(int *)&local_c);
        break;
      case 0xff04:
        iVar3 = FUN_66492f20(this,(int *)&local_8,(int *)&local_c);
        break;
      case 0xff05:
        iVar3 = FUN_66492fd0(this,(int *)&local_8,(int *)&local_c);
        break;
      case 0xff06:
        iVar3 = FUN_66493080(this,&local_8,(int *)&local_c);
        break;
      default:
        iVar3 = -0x7ffbfff7;
        break;
      case 0xff08:
        if (DVar2 == 0) {
          iVar3 = (**(code **)*param_1)(param_1,&DAT_664dd9d0,&local_1c);
          if (iVar3 == 0) {
            DVar2 = (**(code **)(*local_1c + 0xc))(local_1c);
            (**(code **)(*local_1c + 8))(local_1c);
          }
          else {
            DVar2 = GetTickCount();
          }
        }
        iVar3 = FUN_66492ae0(this,&local_8,(int *)&local_c,DVar2);
      }
    }
  }
  (**(code **)(*param_1 + 8))(param_1);
  return iVar3;
}


