/* Module: vegas30.exe
   Function: FUN_0055d690
   Address: 0055d690
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0055d690(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  HGLOBAL hMem;
  LPVOID pvVar4;
  int *unaff_EBP;
  uint unaff_ESI;
  undefined4 uVar5;
  int *unaff_retaddr;
  int *piVar6;
  int *piVar7;
  int *piStack_54;
  undefined4 uStack_50;
  int *piStack_4c;
  LPVOID pvStack_48;
  SIZE_T *pSStack_44;
  SIZE_T SStack_2c;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  undefined *puStack_20;
  int *piStack_1c;
  
  puVar1 = param_3;
  uVar5 = 0;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 1;
  }
  piStack_1c = (int *)&param_3;
  param_3 = (undefined4 *)0x0;
  puStack_20 = &DAT_0060f078;
  puStack_24 = DAT_0064b510;
  uStack_28 = 0x55d6ce;
  iVar2 = (**(code **)*DAT_0064b510)();
  if ((-1 < iVar2) && (unaff_retaddr != (int *)0x0)) {
    uStack_28 = 0;
    SStack_2c = 0x10;
    iVar2 = (**(code **)(*unaff_retaddr + 0xc))();
    if (-1 < iVar2) {
      pvStack_48 = (LPVOID)0x55d705;
      (**(code **)(*unaff_EBP + 0x24))();
      if ((unaff_ESI & 4) == 0) {
        pvStack_48 = (LPVOID)0x6e37;
        piStack_4c = (int *)DAT_00647204;
        uStack_50 = 0x55d722;
        uVar5 = _SfGetString_8();
        pvStack_48 = (LPVOID)0x6e36;
        piStack_4c = (int *)DAT_00647204;
        uStack_50 = 0x55d735;
        uVar3 = _SfGetString_8();
        pvStack_48 = (LPVOID)0x0;
        piStack_4c = (int *)0x0;
        uStack_50 = 0;
        piStack_54 = (int *)0xffffffff;
        (**(code **)(*piStack_1c + 0x1c))(piStack_1c,uVar5,uVar3);
        uVar5 = _SfGetString_8(DAT_00647204,0x6e3b);
        uVar3 = _SfGetString_8(DAT_00647204,0x6e3a);
        piVar7 = (int *)0xffffffff;
        (**(code **)(*unaff_retaddr + 0x1c))(unaff_retaddr,uVar5,uVar3,0xffffffff,0,0,0);
        uVar5 = _SfGetString_8(DAT_00647204,0x6e33);
        uVar3 = _SfGetString_8(DAT_00647204,0x6e32);
        piVar6 = (int *)0xffffffff;
        (**(code **)(*piStack_54 + 0x1c))(piStack_54,uVar5,uVar3,0xffffffff,0,0,0);
        uVar5 = _SfGetString_8(DAT_00647204,0x6e45);
        uVar3 = _SfGetString_8(DAT_00647204,0x6e44);
        (**(code **)(*piVar7 + 0x1c))(piVar7,uVar5,uVar3,0xffffffff,0,0,0);
        uVar5 = _SfGetString_8(DAT_00647204,0x6e35);
        uVar3 = _SfGetString_8(DAT_00647204,0x6e34);
        (**(code **)(*piVar6 + 0x1c))(piVar6,uVar5,uVar3,0xffffffff,0,0,0);
        pSStack_44 = (SIZE_T *)SStack_2c;
      }
      else {
        pSStack_44 = (SIZE_T *)0x6e09;
      }
      if ((unaff_ESI & 2) == 0) {
        pvStack_48 = (LPVOID)DAT_00647204;
        piStack_4c = (int *)0x55d842;
        piStack_54 = (int *)_SfGetString_8();
        pSStack_44 = (SIZE_T *)0x0;
        pvStack_48 = (LPVOID)0x4;
        piStack_4c = (int *)0x0;
        uStack_50 = 0xffffffff;
        (**(code **)(*piStack_1c + 0x20))(piStack_1c);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 2;
        }
      }
      pSStack_44 = (SIZE_T *)0x6e3d;
      pvStack_48 = (LPVOID)DAT_00647204;
      piStack_4c = (int *)0x55d870;
      uVar5 = _SfGetString_8();
      pSStack_44 = (SIZE_T *)0x6e3c;
      pvStack_48 = (LPVOID)DAT_00647204;
      piStack_4c = (int *)0x55d883;
      piStack_54 = (int *)_SfGetString_8();
      pSStack_44 = (SIZE_T *)0x0;
      pvStack_48 = (LPVOID)0x0;
      piStack_4c = (int *)0x0;
      uStack_50 = 0xffffffff;
      (**(code **)(*piStack_1c + 0x1c))(piStack_1c,uVar5);
      uStack_50 = 0;
      piStack_54 = (int *)0x0;
      iVar2 = (**(code **)(*unaff_retaddr + 0x28))(unaff_retaddr,0,&uStack_50,0,&piStack_54);
      uVar5 = uStack_28;
      if (-1 < iVar2) {
        pSStack_44 = (SIZE_T *)0x55d8d0;
        hMem = GlobalAlloc(0x42,SStack_2c);
        pvVar4 = GlobalLock(hMem);
        *piStack_1c = (int)pvVar4;
        uVar5 = uStack_28;
        if (pvVar4 != (LPVOID)0x0) {
          pSStack_44 = &SStack_2c;
          uStack_50 = 0x55d903;
          piStack_4c = unaff_EBP;
          pvStack_48 = pvVar4;
          iVar2 = (**(code **)(*unaff_EBP + 0x28))();
          uVar5 = uStack_28;
          if (-1 < iVar2) {
            uStack_28 = 200;
            uVar5 = uStack_28;
          }
        }
      }
    }
    (**(code **)(*unaff_EBP + 8))();
  }
  return uVar5;
}


