#include "conopt.h"

int COI_CALLCONV COI_Solve(coiHandle_t) { return 0; }

void COI_CALLCONV COIGET_Version(int* major, int* minor, int* patch)
{
  if (major) *major = 4;
  if (minor) *minor = 39;
  if (patch) *patch = 2;
}

int COI_CALLCONV COIGET_MaxThreads(coiHandle_t) { return 1; }
double COI_CALLCONV COIGET_MaxHeapUsed(coiHandle_t) { return 0.0; }
int COI_CALLCONV COIGET_RangeErrors(coiHandle_t) { return 0; }

int COI_CALLCONV COI_Create(coiHandle_t*) { return 0; }
int COI_CALLCONV COI_Free(coiHandle_t*) { return 0; }
void COI_CALLCONV COI_Finalize(void) {}

int COI_CALLCONV COIDEF_NumVar(coiHandle_t, int) { return 0; }
int COI_CALLCONV COIDEF_NumCon(coiHandle_t, int) { return 0; }
int COI_CALLCONV COIDEF_NumNz(coiHandle_t, int) { return 0; }
int COI_CALLCONV COIDEF_NumNlNz(coiHandle_t, int) { return 0; }
int COI_CALLCONV COIDEF_NumHess(coiHandle_t, int) { return 0; }
int COI_CALLCONV COIDEF_OptDir(coiHandle_t, int) { return 0; }
int COI_CALLCONV COIDEF_ObjVar(coiHandle_t, int) { return 0; }
int COI_CALLCONV COIDEF_ObjCon(coiHandle_t, int) { return 0; }

int COI_CALLCONV COIDEF_License(coiHandle_t, int, int, int, const char*) { return 0; }
int COI_CALLCONV COIDEF_ItLim(coiHandle_t, int) { return 0; }
int COI_CALLCONV COIDEF_ErrLim(coiHandle_t, int) { return 0; }
int COI_CALLCONV COIDEF_ResLim(coiHandle_t, double) { return 0; }
int COI_CALLCONV COIDEF_MaxHeap(coiHandle_t, double) { return 0; }
int COI_CALLCONV COIDEF_IniStat(coiHandle_t, int) { return 0; }
int COI_CALLCONV COIDEF_FVincLin(coiHandle_t, int) { return 0; }
int COI_CALLCONV COIDEF_FVforAll(coiHandle_t, int) { return 0; }
int COI_CALLCONV COIDEF_MaxSup(coiHandle_t, int) { return 0; }
int COI_CALLCONV COIDEF_Square(coiHandle_t, int) { return 0; }
int COI_CALLCONV COIDEF_EmptyRow(coiHandle_t, int) { return 0; }
int COI_CALLCONV COIDEF_EmptyCol(coiHandle_t, int) { return 0; }
int COI_CALLCONV COIDEF_DisCont(coiHandle_t, int) { return 0; }
int COI_CALLCONV COIDEF_HessFac(coiHandle_t, double) { return 0; }
int COI_CALLCONV COIDEF_DebugFV(coiHandle_t, int) { return 0; }
int COI_CALLCONV COIDEF_Debug2D(coiHandle_t, int) { return 0; }
int COI_CALLCONV COIDEF_OptOrder(coiHandle_t, int) { return 0; }
int COI_CALLCONV COIDEF_ClearM(coiHandle_t, int) { return 0; }
int COI_CALLCONV COIDEF_ZeroNoise(coiHandle_t, int) { return 0; }
int COI_CALLCONV COIDEF_ThreadS(coiHandle_t, int) { return 0; }
int COI_CALLCONV COIDEF_ThreadF(coiHandle_t, int) { return 0; }
int COI_CALLCONV COIDEF_Thread2D(coiHandle_t, int) { return 0; }
int COI_CALLCONV COIDEF_ThreadC(coiHandle_t, int) { return 0; }
int COI_CALLCONV COIDEF_StdOut(coiHandle_t, int) { return 0; }

int COI_CALLCONV COIDEF_Optfile(coiHandle_t, const char*) { return 0; }

int COI_CALLCONV COIDEF_ReadMatrix(coiHandle_t, COI_READMATRIX_t) { return 0; }
int COI_CALLCONV COIDEF_FDEval(coiHandle_t, COI_FDEVAL_t) { return 0; }
int COI_CALLCONV COIDEF_FDEvalIni(coiHandle_t, COI_FDEVALINI_t) { return 0; }
int COI_CALLCONV COIDEF_FDEvalEnd(coiHandle_t, COI_FDEVALEND_t) { return 0; }
int COI_CALLCONV COIDEF_Status(coiHandle_t, COI_STATUS_t) { return 0; }
int COI_CALLCONV COIDEF_Solution(coiHandle_t, COI_SOLUTION_t) { return 0; }
int COI_CALLCONV COIDEF_Message(coiHandle_t, COI_MESSAGE_t) { return 0; }
int COI_CALLCONV COIDEF_ErrMsg(coiHandle_t, COI_ERRMSG_t) { return 0; }
int COI_CALLCONV COIDEF_Progress(coiHandle_t, COI_PROGRESS_t) { return 0; }
int COI_CALLCONV COIDEF_Option(coiHandle_t, COI_OPTION_t) { return 0; }
int COI_CALLCONV COIDEF_TriOrd(coiHandle_t, COI_TRIORD_t) { return 0; }
int COI_CALLCONV COIDEF_FDInterval(coiHandle_t, COI_FDINTERVAL_t) { return 0; }
int COI_CALLCONV COIDEF_2DDir(coiHandle_t, COI_2DDIR_t) { return 0; }
int COI_CALLCONV COIDEF_2DDirIni(coiHandle_t, COI_2DDIRINI_t) { return 0; }
int COI_CALLCONV COIDEF_2DDirEnd(coiHandle_t, COI_2DDIREND_t) { return 0; }
int COI_CALLCONV COIDEF_2DDirLagr(coiHandle_t, COI_2DDIRLAGR_t) { return 0; }
int COI_CALLCONV COIDEF_2DLagrSize(coiHandle_t, COI_2DLAGRSIZE_t) { return 0; }
int COI_CALLCONV COIDEF_2DLagrStr(coiHandle_t, COI_2DLAGRSTR_t) { return 0; }
int COI_CALLCONV COIDEF_2DLagrVal(coiHandle_t, COI_2DLAGRVAL_t) { return 0; }
int COI_CALLCONV COIDEF_UsrMem(coiHandle_t, void*) { return 0; }
