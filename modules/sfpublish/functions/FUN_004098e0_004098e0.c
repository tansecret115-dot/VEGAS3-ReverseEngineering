/* Module: sfpublish.dll
   Function: FUN_004098e0
   Address: 004098e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004098e0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = -0x7fffbffd;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    puVar1 = *(undefined4 **)(param_1 + 0x14);
    if ((puVar1 != (undefined4 *)0x0) &&
       (iVar2 = (**(code **)*puVar1)(puVar1,&DAT_0043cad0,param_2), -1 < iVar2)) {
      return iVar2;
    }
    iVar2 = (*(code *)**(undefined4 **)(param_1 + -4))(param_1 + -4,&DAT_0043cad0,param_2);
  }
  return iVar2;
}


