/* Module: vegas30.exe
   Function: FUN_00578950
   Address: 00578950
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00578950(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uStack_18;
  int *piStack_14;
  undefined1 *puStack_10;
  int *local_c [2];
  undefined1 local_4 [4];
  
  piVar1 = DAT_0064b570;
  piStack_14 = (int *)local_c;
  puStack_10 = local_4;
  uStack_18 = param_1;
  iVar2 = (**(code **)(*DAT_0064b570 + 0x20))();
  if (-1 < iVar2) {
    iVar2 = CoCreateInstance((IID *)&DAT_0061bd50,(LPUNKNOWN)0x0,1,(IID *)&DAT_0061bd60,
                             &DAT_00659e58);
    if (-1 < iVar2) {
      local_c[0] = (int *)0x0;
      iVar2 = (**(code **)*DAT_00659e58)(DAT_00659e58,&DAT_00633718,local_c);
      if (-1 < iVar2) {
        uStack_18 = 0;
        piVar3 = piStack_14;
        piVar4 = piVar1;
        iVar2 = (**(code **)(*local_c[0] + 0x10))(local_c[0],piStack_14,piVar1,&uStack_18);
        if ((-1 < iVar2) && (piVar3 != piVar4)) {
          iVar2 = -0x7ffb1fc7;
        }
        (**(code **)(*piVar1 + 8))(piVar1);
      }
    }
    CoTaskMemFree(piStack_14);
  }
  return iVar2;
}


