/* Module: vegas30k.dll
   Function: _SfPlugIn_FindNode@8
   Address: 0102b2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * _SfPlugIn_FindNode_8(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  do {
    if (param_1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    iVar1 = 4;
    bVar4 = true;
    piVar2 = param_1 + 4;
    piVar3 = param_2;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *piVar2 == *piVar3;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (bVar4);
    if (bVar4) {
      return param_1;
    }
    param_1 = (undefined4 *)*param_1;
  } while( true );
}


