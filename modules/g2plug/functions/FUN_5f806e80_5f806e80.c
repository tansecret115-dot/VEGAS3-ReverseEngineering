/* Module: g2plug.dll
   Function: FUN_5f806e80
   Address: 5f806e80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f806e80(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 unaff_ESI;
  int *unaff_EDI;
  char *pcVar5;
  int *piStack_10;
  int *local_c;
  int *piStack_8;
  int *local_4;
  
  local_4 = (int *)0x0;
  local_c = (int *)0x0;
  if (DAT_5f87749c == (undefined4 *)0x0) {
    iVar4 = -0x7ffbfff9;
  }
  else {
    iVar4 = (**(code **)*DAT_5f87749c)(DAT_5f87749c,&DAT_5f86a770,&local_4);
    if (-1 < iVar4) {
      iVar4 = (**(code **)(*local_4 + 0xc))(local_4,&local_c);
      if (-1 < iVar4) {
        piStack_8 = (int *)0x0;
        piStack_10 = (int *)0x0;
        if (((param_1 != 0) && (param_2 != (char *)0x0)) && (local_c != (int *)0x0)) {
          iVar2 = (**(code **)*DAT_5f87749c)(DAT_5f87749c,&DAT_5f86a4c0,&piStack_8);
          if (-1 < iVar2) {
            iVar2 = (**(code **)(*piStack_8 + 0xc))
                              (piStack_8,&DAT_5f86a780,0,&DAT_5f86a780,&piStack_10);
            if (-1 < iVar2) {
              uVar3 = 0xffffffff;
              pcVar5 = param_2;
              do {
                if (uVar3 == 0) break;
                uVar3 = uVar3 - 1;
                cVar1 = *pcVar5;
                pcVar5 = pcVar5 + 1;
              } while (cVar1 != '\0');
              (**(code **)(*piStack_10 + 0x10))(piStack_10,param_2,~uVar3);
              (**(code **)(*unaff_EDI + 0x2c))(unaff_EDI,piStack_8,unaff_ESI);
            }
          }
        }
        (**(code **)(*piStack_10 + 8))(piStack_10);
        (**(code **)(*local_c + 8))(local_c);
      }
    }
  }
  (**(code **)(*local_4 + 8))(local_4);
  (**(code **)(*piStack_10 + 8))(piStack_10);
  return iVar4;
}


