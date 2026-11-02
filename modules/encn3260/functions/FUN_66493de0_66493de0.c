/* Module: encn3260.dll
   Function: FUN_66493de0
   Address: 66493de0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66493de0(void *this,int *param_1)

{
  ushort uVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  int *local_10;
  int local_c;
  int local_8;
  
  iVar4 = 0;
  (**(code **)(*param_1 + 4))(param_1);
  local_c = (**(code **)(*param_1 + 0x1c))(param_1);
  local_8 = (**(code **)(*param_1 + 0x18))(param_1);
  iVar2 = (**(code **)*param_1)(param_1,&DAT_664dd9d0,&local_10);
  if (iVar2 == 0) {
    DVar3 = (**(code **)(*local_10 + 0xc))(local_10);
    (**(code **)(*local_10 + 8))(local_10);
  }
  else {
    DVar3 = GetTickCount();
  }
  while ((local_8 != 0 && (iVar4 == 0))) {
    uVar1 = CONCAT11(*(undefined1 *)(local_c + 1),*(undefined1 *)(local_c + 2));
    if (uVar1 < 0xff00) {
      iVar4 = FUN_66493ec0(this,&local_c,&local_8,DVar3);
    }
    else if (uVar1 == 0xff06) {
      iVar4 = FUN_664942f0(this,&local_c,&local_8);
    }
    else if (uVar1 == 0xff08) {
      iVar4 = FUN_66494250(this,&local_c,&local_8,DVar3);
    }
    else {
      iVar4 = -0x7ffbfff7;
    }
  }
  (**(code **)(*param_1 + 8))(param_1);
  return iVar4;
}


