/* Module: vegas30.exe
   Function: FUN_00595ff0
   Address: 00595ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00595ff0(int param_1,int param_2,uint param_3,int param_4,int *param_5,DWORD param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int local_8;
  
  *param_5 = 0;
  if (param_6 == 0) goto LAB_0059602e;
  local_8 = _SfGetMillisec_0();
  while( true ) {
    if (((param_6 != 0) && (param_6 != 0xffffffff)) &&
       (uVar4 = _SfGetMillisec_0(), local_8 + param_6 <= uVar4)) {
      if (param_6 == 0) {
        return 0x80004005;
      }
      return 0x8004e02c;
    }
LAB_0059602e:
    FUN_00595760(param_1,param_2);
    iVar1 = **(int **)(param_2 + 0x5d0);
    if ((iVar1 == 0) &&
       ((*(int **)(param_2 + 0x28) == (int *)0x0 || (**(int **)(param_2 + 0x28) < 1)))) break;
    iVar7 = 0;
    if (0 < iVar1) {
      piVar6 = (int *)(*(int **)(param_2 + 0x5d0))[2];
      do {
        iVar2 = *piVar6;
        if ((0 < *(int *)(iVar2 + 0x30)) && (*(int *)(iVar2 + 0x38) == 0)) {
          iVar5 = *(int *)(iVar2 + 0x1c);
          uVar4 = *(uint *)(iVar2 + 0x18);
          if ((iVar5 <= param_4) && ((iVar5 < param_4 || (uVar4 <= param_3)))) {
            uVar3 = *(uint *)(iVar2 + 0x2c);
            iVar5 = (((int)uVar3 >> 0x1f) + iVar5 + (uint)CARRY4(uVar3,uVar4)) -
                    (uint)(uVar3 + uVar4 == 0);
            if ((param_4 < iVar5) || ((param_4 <= iVar5 && (param_3 <= (uVar3 + uVar4) - 1)))) {
              *param_5 = iVar2;
              FUN_00595790(param_1,param_2);
              return 0;
            }
          }
        }
        iVar7 = iVar7 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar7 < iVar1);
    }
    FUN_00595790(param_1,param_2);
    if (param_6 == 0) {
      return 0x80004005;
    }
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x9c),param_6);
    _DAT_0064b4c0 = _DAT_0064b4c0 + 1;
  }
  FUN_00595790(param_1,param_2);
  return 0x4e001;
}


