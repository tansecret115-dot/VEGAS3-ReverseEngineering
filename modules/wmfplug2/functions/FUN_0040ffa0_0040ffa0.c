/* Module: wmfplug2.dll
   Function: FUN_0040ffa0
   Address: 0040ffa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00410016) */
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0040ffa0(int *param_1)

{
  int iVar1;
  int *unaff_ESI;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int *piStack_48;
  int *piStack_40;
  int *piStack_3c;
  int *piStack_38;
  int *piStack_34;
  int aiStack_30 [2];
  int *piStack_28;
  undefined4 uStack_24;
  int *piStack_20;
  int **ppiStack_1c;
  int *piStack_4;
  
  if (param_1 != (int *)0x0) {
    ppiStack_1c = &param_1;
    piStack_20 = param_1;
    uStack_24 = 0x40ffbb;
    iVar1 = (**(code **)(*param_1 + 0xc))();
    if (-1 < iVar1) {
      uStack_24 = 0;
      piStack_28 = (int *)0x0;
      aiStack_30[1] = 0;
      aiStack_30[0] = 0;
      piStack_34 = piStack_4;
      piStack_38 = (int *)0x40ffd5;
      (**(code **)(*piStack_4 + 0x14))();
      piStack_38 = aiStack_30 + 1;
      piStack_40 = aiStack_30;
      piStack_3c = (int *)0x4;
      piStack_48 = (int *)0x40ffeb;
      iVar1 = (**(code **)(*unaff_ESI + 0xc))();
      if (-1 < iVar1) {
        piStack_38 = (int *)0x0;
        piStack_34 = (int *)0x0;
        piStack_48 = (int *)0x0;
        uStack_4c = 0;
        aiStack_30[0] = 0;
        uStack_50 = 0;
        (**(code **)(*piStack_28 + 0x14))(piStack_28);
        iVar1 = (**(code **)(*piStack_3c + 0xc))(piStack_3c,&uStack_4c,0,&uStack_50);
        if (((-1 < iVar1) && (piStack_34 < (int *)0x65)) && (0 < aiStack_30[0])) {
          piStack_48 = piStack_28;
          uStack_4c = 0x41004d;
          (**(code **)(*piStack_28 + 8))();
          return 1;
        }
      }
      piStack_48 = piStack_28;
      uStack_4c = 0x410063;
      (**(code **)(*piStack_28 + 8))();
    }
  }
  return 0;
}


