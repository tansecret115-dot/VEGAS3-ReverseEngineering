/* Module: rmme3260.dll
   Function: FUN_662614c0
   Address: 662614c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_662614c0(void *this,int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  char local_804 [2048];
  
  puVar1 = FUN_66250d40(*(void **)((int)this + 0x58),param_1);
  piVar2 = (int *)FUN_66250c10((int)puVar1);
  piVar2 = (int *)*piVar2;
  if (piVar2 == (int *)0x0) {
    sprintf(local_804,s_Fatal_Error__A_required_plugin_c_6627ca9c);
  }
  else {
    uVar3 = (**(code **)(*piVar2 + 0x1c))(piVar2);
    sprintf(local_804,s_Fatal_Error__The_following_requi_6627cad0,uVar3);
  }
  piVar2 = *(int **)((int)this + 0x44);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0xc))(piVar2,0,0,0,local_804,0);
  }
  return;
}


