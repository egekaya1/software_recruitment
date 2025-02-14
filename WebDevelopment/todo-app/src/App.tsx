import { useState } from 'react';

function App() {
  const [count, setCount] = useState(0);

  return (
    <div className="flex items-center justify-center min-h-screen bg-gray-100">
      <div className="text-center">
        <p className="text-xl font-bold text-blue-500">Hello world!</p>
        <p className="text-lg text-gray-700 mt-4">Count: {count}</p>
        <button
          className="mt-2 px-4 py-2 bg-blue-500 text-white rounded"
          onClick={() => setCount(count + 1)}
        >
          Increment
        </button>
      </div>
    </div>
  );
}

export default App;
