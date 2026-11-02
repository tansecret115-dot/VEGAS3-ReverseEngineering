/* Module: vegas30k.dll
   Function: FUN_01188720
   Address: 01188720
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01188720(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = param_2;
  puVar1 = (undefined4 *)param_1[0x18e];
  param_1[100] = param_2;
  do {
    if (puVar1 == (undefined4 *)0x0) {
LAB_01188771:
      if ((*(byte *)(param_1 + 8) & 1) != 0) {
        piVar2 = (int *)param_1[0xb];
        if ((piVar2[0x180] != 2) && (piVar2[0x180] != 3)) {
          (**(code **)(*param_1 + 0xd0))(param_1,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
          return 0;
        }
        (**(code **)(*piVar2 + 0xd8))(piVar2,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
      }
      return 0;
    }
    param_2 = 0;
    (**(code **)(*(int *)*puVar1 + 0x8c))((int *)*puVar1,0x32,&param_2);
    if (puVar1[9] != 0) {
      (**(code **)(*(int *)*puVar1 + 0x194))(param_1,iVar3);
      goto LAB_01188771;
    }
    puVar1 = (undefined4 *)puVar1[0x19];
  } while( true );
}


