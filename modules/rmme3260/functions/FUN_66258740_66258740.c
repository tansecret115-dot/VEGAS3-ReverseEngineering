/* Module: rmme3260.dll
   Function: FUN_66258740
   Address: 66258740
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_66258740(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_6627f17c != (undefined4 *)0x0) {
    if (DAT_6627f198 != (int *)0x0) {
      (**(code **)(*DAT_6627f198 + 4))();
    }
    FUN_66251160(DAT_6627f17c,param_1);
    if (DAT_6627f18c != (int *)0x0) {
      iVar2 = (**(code **)(*DAT_6627f18c + 0x18))(param_1,0);
      if (iVar2 != 0) {
        (**(code **)(*DAT_6627f18c + 0xc))(iVar2);
        param_1[1] = 0;
      }
    }
    puVar1 = DAT_6627f17c;
    if (DAT_6627f17c[3] == 0) {
      if (DAT_6627f17c != (undefined4 *)0x0) {
        FUN_66250ed0(DAT_6627f17c);
        operator_delete(puVar1);
      }
      DAT_6627f17c = (undefined4 *)0x0;
    }
    if ((DAT_6627f18c != (int *)0x0) && (DAT_6627f18c[4] == 0)) {
      if (DAT_6627f18c != (int *)0x0) {
        (**(code **)*DAT_6627f18c)(1);
      }
      DAT_6627f18c = (int *)0x0;
    }
    if (DAT_6627f198 != (int *)0x0) {
      (**(code **)(*DAT_6627f198 + 8))();
    }
  }
  return;
}


