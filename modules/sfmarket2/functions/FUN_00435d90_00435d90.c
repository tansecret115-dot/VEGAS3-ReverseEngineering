/* Module: sfmarket2.dll
   Function: FUN_00435d90
   Address: 00435d90
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00435d90(void *param_1,uchar *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_570;
  undefined4 local_56c;
  int local_568 [21];
  undefined1 uStack_514;
  undefined1 uStack_410;
  undefined1 uStack_30c;
  WCHAR local_208 [259];
  undefined2 local_2;
  
  if (*(int *)((int)param_1 + 0x24) == 0) {
    uVar1 = 0x80004005;
  }
  else {
    uVar1 = FUN_00435cc0(param_1,param_2);
    if (uVar1 == 0) {
      iVar2 = FUN_00437a00((int)param_1);
      if (((iVar2 < 2) || (iVar2 = FUN_00439040(param_1), iVar2 < 0)) &&
         (iVar2 = FUN_00437a00((int)param_1), 1 < iVar2)) {
        uVar1 = 0x8004e00b;
      }
      else {
        if (*(int *)((int)param_1 + 0x20) != 0) {
          local_570 = 0;
          local_56c = 0;
          MultiByteToWideChar(0,1,(LPCSTR)((int)param_1 + 0x678),-1,local_208,0x104);
          local_2 = 0;
          FUN_00435bf0(param_1,&local_570);
          (**(code **)(**(int **)((int)param_1 + 0x20) + 4))(local_208,local_570,local_56c);
        }
        *(undefined4 *)((int)param_1 + 0x880) = param_3;
        piVar3 = local_568;
        for (iVar2 = 0xd8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar3 = 0;
          piVar3 = piVar3 + 1;
        }
        uStack_514 = 0;
        uStack_410 = 0;
        uStack_30c = 0;
        uVar1 = FUN_004396b0(param_1,local_568);
        while ((uVar1 == 0 &&
               (uVar1 = FUN_00438440(param_1,(int)local_568,param_2), -1 < (int)uVar1))) {
          piVar3 = local_568;
          for (iVar2 = 0xd8; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar3 = 0;
            piVar3 = piVar3 + 1;
          }
          uVar1 = FUN_00439770(param_1,local_568);
        }
        if (*(int **)((int)param_1 + 0x20) != (int *)0x0) {
          (**(code **)(**(int **)((int)param_1 + 0x20) + 0xc))(0xaaaaaaf);
        }
      }
    }
    else {
      FUN_004390e0(param_1,0xaaaaaaa8,(uchar *)"ExtractAll",(uchar *)0x0);
      uVar1 = 0x8004e0c8;
    }
  }
  return (-1 < (int)uVar1) - 1 & uVar1;
}


