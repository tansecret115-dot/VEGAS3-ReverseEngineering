/* Module: rmme3260.dll
   Function: FUN_66259ec0
   Address: 66259ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66259ec0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar1 = (int *)FUN_662582f0(1);
  (**(code **)(*piVar1 + 0x1c))();
  FUN_662586d0((uint)piVar1);
  if (piVar1 != (int *)0x0) {
    local_8 = 0x10;
    local_c = (**(code **)(*param_1 + 0x50))();
    iVar2 = DAT_6627f238;
    if ((*(int *)(DAT_6627f238 + 4) == 0) || (*(int *)(DAT_6627f238 + 9) == 0)) {
      assert(s_m_hLib_____raaccept_6627c4ac,s___pub_win_sock_h_6627c3b0,0x56);
    }
    iVar2 = (**(code **)(iVar2 + 9))(local_c,&local_1c,&local_8);
    if (iVar2 != -1) {
      (**(code **)(*piVar1 + 0x54))(iVar2);
      (**(code **)(*piVar1 + 0x84))
                (*(undefined4 *)((int)param_1 + 0x52),local_1c,local_18,local_14,local_10);
      if ((*(undefined4 **)((int)param_1 + 0x12) != (undefined4 *)0x0) && (param_1[0x19] == 8)) {
        (**(code **)**(undefined4 **)((int)param_1 + 0x12))(5,1,piVar1);
      }
    }
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x20))();
    }
  }
  return;
}


