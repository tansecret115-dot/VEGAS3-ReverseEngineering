/* Module: stl2plg.dll
   Function: FUN_00405830
   Address: 00405830
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00405830(int *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_570 [17];
  CHAR local_52c [260];
  int local_428 [266];
  
  iVar2 = -0x7ffb1ff8;
  iVar1 = FUN_00417c50((int *)param_1[0x76],0,0);
  if (iVar1 != 0) {
    return -0x7ffb1ff8;
  }
  iVar1 = FUN_00418760(param_1 + 0x77);
  *param_1 = iVar1;
  iVar1 = FUN_004184b0(param_1,param_1[0x76]);
  if (iVar1 == 0) {
    piVar3 = local_570;
    for (iVar1 = 0x10; piVar3 = piVar3 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = 0;
    }
    local_570[1] = 0x40;
    local_570[2] = 0xffffffff;
    local_570[4] = 0xffffffff;
    local_570[3] = 0;
    local_570[0xd] = 0;
    local_570[5] = 0;
    local_570[0xe] = 0;
    local_570[6] = 0;
    local_570[0xf] = 0;
    local_570[7] = 0;
    local_570[0x10] = 0;
    local_570[8] = 0x3ff00000;
    local_570[9] = 0;
    local_570[10] = 0;
    local_570[0xb] = 0;
    local_570[0xc] = 0;
    if (*(int *)((int)param_1 + 0x96) == 1) {
      iVar1 = 0x14;
    }
    else {
      if (*(int *)((int)param_1 + 0x96) != 3) {
        FUN_00417fd0((int)param_1);
        return -0x7ffb1ff5;
      }
      iVar1 = 0x1b;
    }
    iVar2 = FUN_0040fe70(local_428,iVar1,*(int *)((int)param_1 + 0x55),*(int *)((int)param_1 + 0x59)
                         ,(uint *)0x0,0,local_570);
    if (iVar2 == 0) {
      FUN_0040d4c0(DAT_00473620,0x1b2,local_52c,0x104);
      lstrcpynA((LPSTR)((int)param_2 + 0x78),local_52c,0x104);
      *(undefined1 *)((int)param_2 + 0x17b) = 0;
      FUN_00402690(param_2,local_428);
      FUN_00402710(param_2,local_570 + 1);
      *(int *)((int)param_2 + 0x50) = local_570[0];
    }
  }
  FUN_00417fd0((int)param_1);
  return iVar2;
}


