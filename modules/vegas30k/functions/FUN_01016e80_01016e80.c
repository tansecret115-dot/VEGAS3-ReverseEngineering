/* Module: vegas30k.dll
   Function: FUN_01016e80
   Address: 01016e80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01016e80(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  piVar1 = *(int **)(param_2 + 0x348);
  if (piVar1 != (int *)0x0) {
    iVar6 = piVar1[0x44];
    piVar2 = (int *)*piVar1;
    piVar1[0x44] = iVar6 + -1;
    if (iVar6 + -1 == 0) {
      piVar5 = (int *)piVar2[0x42];
      iVar6 = 0;
      while( true ) {
        if (piVar5 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *piVar5;
        }
        if (iVar3 <= iVar6) goto joined_r0x01016f03;
        if (piVar5 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *piVar5;
        }
        if ((iVar6 < 0) || (iVar3 + -1 < iVar6)) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = *(int **)(piVar5[2] + iVar6 * 4);
        }
        if (piVar1 == piVar4) break;
        iVar6 = iVar6 + 1;
      }
      _SfList_Destroy_4(piVar1[0x42]);
      _SfList_DeleteList_16(piVar2[0x42],iVar6,1,0);
joined_r0x01016f03:
      do {
        piVar1 = piVar2;
        if ((piVar1 == (int *)0x0) ||
           ((piVar2 = (int *)piVar1[0x42], piVar2 != (int *)0x0 && (*piVar2 != 0)))) break;
        _SfList_Destroy_4(piVar2);
        piVar2 = (int *)*piVar1;
        if (piVar2 == (int *)0x0) {
          piVar5 = *(int **)(param_1 + 4);
        }
        else {
          piVar5 = (int *)piVar2[0x42];
        }
        iVar6 = 0;
        while( true ) {
          if (piVar5 == (int *)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *piVar5;
          }
          if (iVar3 <= iVar6) goto joined_r0x01016f03;
          if (piVar5 == (int *)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *piVar5;
          }
          if ((iVar6 < 0) || (iVar3 + -1 < iVar6)) {
            piVar4 = (int *)0x0;
          }
          else {
            piVar4 = *(int **)(piVar5[2] + iVar6 * 4);
          }
          if (piVar1 == piVar4) break;
          iVar6 = iVar6 + 1;
        }
        _SfList_DeleteList_16(piVar5,iVar6,1,0);
      } while( true );
    }
    *(undefined4 *)(param_2 + 0x348) = 0;
  }
  return 0;
}


