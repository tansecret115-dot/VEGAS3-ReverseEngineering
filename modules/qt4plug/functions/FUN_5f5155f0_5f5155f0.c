/* Module: qt4plug.dll
   Function: FUN_5f5155f0
   Address: 5f5155f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f5155f0(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4,
                 undefined1 *param_5,undefined1 *param_6,undefined1 *param_7,undefined1 *param_8,
                 undefined1 *param_9,int param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uStack_c;
  
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  *param_7 = 0;
  *param_8 = 0;
  *param_9 = 0;
  if ((param_2 == 0x53565131) || (param_2 == 0x53565133)) {
    iVar1 = *param_1;
    iVar2 = FUN_5f57b3d0();
    iVar5 = 0x10;
    iVar8 = 0x14;
    iVar4 = 0x124;
    iVar7 = 0x25c;
    iVar3 = 0x260;
    param_1 = (int *)0x264;
    uStack_c = 0;
    if (param_2 == 0x53565133) {
      iVar5 = 0x24;
      iVar8 = 0x20;
      iVar4 = 0;
      iVar7 = 0x10;
      iVar3 = 0x14;
      param_1 = (int *)0x18;
      uStack_c = 0xc;
      iVar6 = 0x24;
    }
    else {
      iVar6 = 0x264;
    }
    if (iVar6 < iVar2) {
      *param_3 = *(undefined1 *)(iVar8 + iVar1);
      *param_4 = *(undefined1 *)(iVar5 + iVar1);
      *param_6 = *(undefined1 *)(iVar3 + iVar1);
      *param_7 = *(undefined1 *)(iVar1 + iVar7);
      *param_8 = *(undefined1 *)((int)param_1 + iVar1);
      if (iVar4 != 0) {
        *param_5 = *(undefined1 *)(iVar4 + iVar1);
      }
      if ((uStack_c != 0) && (*param_9 = *(undefined1 *)(uStack_c + iVar1), param_10 == 0)) {
        *(undefined1 *)(uStack_c + iVar1) = 0;
      }
    }
  }
  return;
}


