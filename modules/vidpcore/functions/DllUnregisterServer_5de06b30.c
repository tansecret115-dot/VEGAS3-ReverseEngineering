/* Module: vidpcore.dll
   Function: DllUnregisterServer
   Address: 5de06b30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 DllUnregisterServer(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  HRESULT HVar6;
  int *piVar7;
  int *piStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
                    /* 0x6b30  4  DllUnregisterServer */
  piVar7 = DAT_5df42790;
  if (*DAT_5df42790 == 0) {
    return 0;
  }
  do {
    if ((((code *)piVar7[6] == (code *)0x0) || (iVar4 = (*(code *)piVar7[6])(), iVar4 == 0)) &&
       ((*(code *)piVar7[1])(0), DAT_5df42780 == 0x84)) {
      if ((code *)piVar7[7] != (code *)0x0) {
        piVar5 = (int *)(*(code *)piVar7[7])();
        iVar4 = *piVar7;
        piStack_14 = (int *)0x0;
        if (piVar5 != (int *)0x0) {
          HVar6 = CoCreateInstance((IID *)&DAT_5df38b98,(LPUNKNOWN)0x0,1,(IID *)&DAT_5df38ba8,
                                   &piStack_14);
          if (HVar6 < 0) {
            if (piStack_14 != (int *)0x0) {
              (**(code **)(*piStack_14 + 8))(piStack_14);
            }
          }
          else {
            iVar2 = *piVar5;
            while (iVar2 != 0) {
              puVar3 = (undefined4 *)piVar5[1];
              uStack_10 = *puVar3;
              uStack_c = puVar3[1];
              uStack_8 = puVar3[2];
              uStack_4 = puVar3[3];
              if (*piVar5 == 1) {
                (**(code **)(*piStack_14 + 0x18))();
              }
              else {
                (**(code **)(*piStack_14 + 0x20))(piStack_14,iVar4,1,&uStack_10);
              }
              piVar1 = piVar5 + 2;
              piVar5 = piVar5 + 2;
              iVar2 = *piVar1;
            }
            if (piStack_14 != (int *)0x0) {
              (**(code **)(*piStack_14 + 8))(piStack_14);
            }
          }
        }
        goto LAB_5de06c1f;
      }
LAB_5de06c2d:
      piVar7 = piVar7 + 9;
    }
    else {
LAB_5de06c1f:
      if (DAT_5df42780 != 100) goto LAB_5de06c2d;
      piVar7 = piVar7 + 7;
    }
    if (*piVar7 == 0) {
      return 0;
    }
  } while( true );
}


