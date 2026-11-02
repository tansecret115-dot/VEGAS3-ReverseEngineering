/* Module: vegas30.exe
   Function: FUN_005f9ad0
   Address: 005f9ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005f9ad0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *unaff_EDI;
  undefined4 *puStack_310;
  CHAR local_30c [260];
  WCHAR local_208 [259];
  undefined2 local_2;
  
  if (-1 < param_2) {
    piVar1 = *(int **)(param_1 + 0x14);
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    if (param_2 < iVar4) {
      iVar4 = piVar1[1] * param_2 + piVar1[2];
      piVar1 = (int *)(iVar4 + 8);
      if (*(int *)(iVar4 + 8) == 0) {
        iVar3 = FUN_005f9910(local_30c,param_1 + 0x24,param_2);
        if (-1 < iVar3) {
          MultiByteToWideChar(0,1,local_30c,-1,local_208,0x104);
          local_2 = 0;
          iVar3 = (**(code **)(*DAT_0064b510 + 0x58))
                            (DAT_0064b510,local_208,(undefined4 *)(iVar4 + 4));
          if (-1 < iVar3) {
            piVar2 = *(int **)(iVar4 + 4);
            puStack_310 = (undefined4 *)0x0;
            iVar3 = (**(code **)(*piVar2 + 0x50))(piVar2,&puStack_310,2,0,0,0,0);
            if (-1 < iVar3) {
              iVar3 = (**(code **)*puStack_310)(puStack_310,&DAT_0060ef78,piVar1);
              (**(code **)(*unaff_EDI + 8))(unaff_EDI);
              if (-1 < iVar3) {
                return iVar4;
              }
            }
          }
        }
        piVar2 = (int *)*piVar1;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
          *piVar1 = 0;
        }
        piVar1 = *(int **)(iVar4 + 4);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          *(undefined4 *)(iVar4 + 4) = 0;
        }
      }
      return iVar4;
    }
  }
  return 0;
}


