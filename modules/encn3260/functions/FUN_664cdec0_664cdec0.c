/* Module: encn3260.dll
   Function: FUN_664cdec0
   Address: 664cdec0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_664cdec0(void *this,void *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  local_14 = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  local_1c = (undefined4 *)0x0;
  local_10 = (int *)0x0;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  if (param_1 != (void *)0x0) {
    iVar1 = FUN_664cf5e0(param_1,&local_10);
    if (iVar1 != 0) goto LAB_664cdf8c;
    iVar2 = (**(code **)*local_10)(local_10,&DAT_664dd960,&local_c);
    piVar3 = local_c;
    if ((iVar2 == 0) ||
       (iVar2 = (**(code **)*local_10)(local_10,&DAT_664dced0,&local_8), piVar3 = local_8,
       iVar2 == 0)) {
      iVar2 = (**(code **)(*piVar3 + 0xc))(piVar3,&local_14,&local_18,&local_1c);
      if (iVar2 == 0) {
        FUN_664cd710(this,local_14);
        FUN_664cd710((void *)((int)this + 0x14),local_18);
        FUN_664cd710((void *)((int)this + 0x28),local_1c);
        *(void **)((int)this + 0x3c) = param_1;
        FUN_664cf580((int)param_1);
      }
      else {
        iVar1 = 10;
      }
      goto LAB_664cdf8c;
    }
  }
  iVar1 = 8;
LAB_664cdf8c:
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
    local_c = (int *)0x0;
  }
  if (local_10 != (int *)0x0) {
    (**(code **)(*local_10 + 8))(local_10);
  }
  return iVar1;
}


